#include <bits/stdc++.h>
#include<iostream>
#include<cstring>
#include<stack>
using namespace std;

#define WHITE 1 //if node is not visited, WHITE = 1
#define GREY 2  //if node is visited first time, GREY = 2
#define BLACK 3 //if node is traversed, BLACK = 3

int Time = 1;
int start_time[150], finish_time[150];
int adj[150][150];
int color[150];
int node, edge;
stack<int> ans;

void DFS_Visit(int x)
{
    //  memset(color,0,sizeof(color));
    color[x] = GREY; //if node is visited first time, GREY = 1
    start_time[x] = Time;
    ++Time;
    //visiting adjacent node
    for (int i = 1; i <= node; i++)
    {
        if (adj[x][i] == 1)
        {
            if (color[i] == WHITE) //if node is not visited, WHITE = 1
            {
                DFS_Visit(i);
            }
        }
    }

    color[x] = BLACK; //if the node's work is done
    finish_time[x] = Time;
    ++Time;
    ans.push(x);
}

void DFS(int Starting_Node)
{
    for (int i = 1; i <= node; i++)
    {
        color[i] = WHITE;
    }
    for (int i = Starting_Node; i <= node; i++)
    {
        if (color[i] == WHITE)
        {
            DFS_Visit(i);
        }
    }
}

int main()
{
    int source, destination, start, end, i, j;
    while (cin >> node >> edge && (node||edge))
    {
        memset(adj,0,sizeof(adj));
        memset(color,0,sizeof(color));
        source = destination = start = end = i = j = 0;
        
        for (i = 1; i <= edge; i++)
        {
            cin >> source >> destination;
            // if(start == 0)
            // {
            //     start = source;
            // }
            adj[source][destination] = 1;
        }
        cin >> start;
        DFS(start);

        while (!ans.empty())
        {
            cout << ans.top() << " ";
            ans.pop();
        }
        cout << endl;
    }
    return 0;
}

/*
input: 

5 4
1 2
2 3
1 3
1 5
0 0

*/