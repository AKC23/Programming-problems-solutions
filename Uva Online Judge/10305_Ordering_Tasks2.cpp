#include<iostream>
#include<cstring>
#include<stack>
using namespace std;
int n,m;
int task[101][101];
int vis[101];
stack<int> s;
void dfs(int u)
{
    vis[u]=-1;
    for(int i=1;i<=n;i++)
    {
        if(task[u][i]==1)
        {
            if(vis[i]==-1)return;
            else if(!vis[i])dfs(i);
        }
    }
    s.push(u);
    vis[u]=1;
}
int main()
{
    while(cin>>n>>m && (m||n))
    {
        memset(task,0,sizeof(task));
        memset(vis,0,sizeof(vis));
        int i,x,y;
        for(i=1;i<=m;i++)
        {
            cin>>x>>y;
            task[x][y]=1;
        }
        for(i=1;i<=n;i++)
        {
            if(vis[i]!=1)dfs(i);
        }
        while(!s.empty())
        {
            cout<<s.top()<<" ";
            s.pop();
        }
        cout<<endl;
    }
    return 0;
}