/**
https://www.youtube.com/watch?v=M390yEnX7TU&list=PLgLCjVh3O6Sgux985GYG22xkFt9z9Sq0_&index=17&ab_channel=LoveExtendsCode
Date: Friday, December 18, 2020  
// Note that by default C++ creates a max-heap for priority queue
*/

#include <bits/stdc++.h>
#include <string>
#include <algorithm>
#include <set>
#include <vector>
#include <cmath>
#include <cstdio>
#include <queue>

using namespace std;

int left(int i)
{
    return 2 * i;
}
int right(int i)
{
    return 2 * i + 1;
}

int parent(int i)
{
    return i / 2;
}

// void max_heapify(int H[], int heap_size, int i)
void max_heapify(int *H, int *heap_size, int *i1)
{
    int i = *i1;
    int size = *heap_size;
    int l, r, largest, temp;
    l = left(i);  //l = left child index
    r = right(i); //r = right child index

    if (l <= size && H[l] > H[i])
    {
        largest = l;
    }
    else
    {
        largest = i;
    }
    if (r <= size && H[r] > H[largest])
    {
        largest = r;
    }

    if (largest == i)
    {
        return;
    }
    temp = H[i];
    H[i] = H[largest];
    H[largest] = temp;
    max_heapify(H, &size, &largest);
    // max_heapify(H, heap_size, largest);
}

// int is_maxHeap(int H[], int heap_size)
int is_maxHeap(int *H, int *heap_size)
{
    // int i, p;
    int i, p, size = *heap_size;

    // for (i = heap_size; i > 1; i--)
    for (i = size; i > 1; i--)
    {
        p = parent(i);
        // printf("i: %d, p = %d \tH[i] = %d, H[p] = %d\n", i, p, H[i], H[p]);
        if (H[p] < H[i])
        {
            return 0;
        }
    }
    return 1;
}

void build_max_heap(int *H, int *heap_size)
{
    int size = *heap_size;
    for (int i = size / 2; i >= 1; i--) //heap_size/2 are already leaf, won't count them
    {
        // max_heapify(H, heap_size, i);
        max_heapify(H, &size, &i);
    }
}

int heap_sort(int *H, int *heap_size)
{
    int i, temp, root = 1, size = *heap_size;

    for (int i = size; i > 1; i--)
    {
        temp = H[1];
        H[1] = H[i];
        H[i] = temp;
        size -= 1;
        
        max_heapify(H, &size, &root);
    }
    return H[size];
}

int get_maximum(int H[])
{
    return H[1];
}

int extract_max(int *H, int *heap_size)
{
    int size = *heap_size,root = 1;
    int max_item = H[1]; //assign top item
    H[1] = H[size];
    // cout<<"\n"<<H[1]<<"\n\n";
    size -= 1;
    max_heapify(H, &size, &root);
    
    return max_item;
}

void Delete_Node(int *H, int *heap_size, int *search_item)
{
    int size = *heap_size, root = 1,item = *search_item,temp;

    for (int i = 1; i <= size; i++)
    {
        if(H[i] == item)
        {
            temp = H[i];
            H[i] = H[size-1];
            H[size-1] = temp;
            --size;
            // cout<<"Size of Heap: "<<size;
            max_heapify(H, &size, &root);
        }
    }
}

int insert_node(int *H, int *heap_size, int *node)
{
    int size = *heap_size,item = *node;
    int i, p, t;
    size += 1;
    H[size] = item;
    i = size;
    while (i > 1 && H[i] > H[parent(i)])
    {
        p = parent(i);
        t = H[p];
        H[p] = H[i];
        H[i] = t;

        i = p;
    }
    return size;
}


void print_heap(int *H, int *heap_size)
{
    int size = *heap_size;
    for (int i = 1; i <= size; i++)
    {
        cout << H[i] << " ";
    }

}

int main()
{
    int heap_size = 1000000,item,count = 0;
    int smallest = 0;
    int H[heap_size]; 
    // H[0] = {0}; 

    int Q, v,x;
    Q = v = x = 0;

    cin >> Q;

    while(Q>0)
    {
        cin >> x;
        switch (x)
        {
        case 1:
            cin>>v;
            // cout<<"Size of heap: "<<heap_size<<" ";
            insert_node(H, &count, &v);
            ++count;
            //cout<<"\nSize of heap: "<<count<<" ";
            // cout<<"\noutput: ";
            // print_heap(H, &count);
            break;
        case 2:
            cin>>v;
            // cout<<v;
            Delete_Node(H, &count, &v);
            // cout<<"\nOutput: ";
            // print_heap(H, &count);
            break;
        case 3:
            // cout<<"heap sort";
            smallest = heap_sort(H, &count);
            // cout<<"heap sort2";            
            // print_heap(H, &heap_size);
            // cout<<"H[1]: "<<get_maximum(H) <<" ";
            // cout<<"H[1]: "<< H[1]<<" ";
            // cout<<"H[2]: "<< H[2]<<" ";
            // cout<<"\noutput: ";
            // print_heap(H, &heap_size);
            //cout<<H[count];
            // cout<<"\nMinimum: "<<smallest;
            cout<<smallest<<"\n";
            break;
        default:
            break;
        }
        --Q;
    }

    return 0;
}