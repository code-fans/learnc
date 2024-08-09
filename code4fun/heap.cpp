#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <string>
using namespace std;


int heapsize;
int heap[100100];

//base 1
void push(int data){
    heapsize++;
    heap[heapsize] = data;
    int i=heapsize;
    while (i>1 && heap[i>>1] < heap[i]) {
        swap(heap[i], heap[i>>1]);
        i = i >>1;
    }
}


int pop(){
    int data = heap[1];
    heap[1] = heap[heapsize];
    heapsize -- ;
    int i = 1;
    while(i<heapsize) {
        int l=i<<1;
        int r=(i<<1)+1;
        int lg = i;
        if (l <= heapsize && heap[i]<heap[l])
            lg=l;
        if(r<=heapsize && heap[r]>heap[lg])
            lg=r;
        if(lg==i) break;
        swap(heap[i], heap[lg]);
        i = lg;
    }
    return data;
}


void change(int pos, int key)
{
    if(heap[pos] > key){
        printf("-1\n");
        return;
    }
    heap[pos] = key;
    int i = pos;
    while (i>1 && heap[i>>1] < heap[i]) {
        swap(heap[i], heap[i>>1]);
        i = i >>1;
    }
}

int main()
{
    int n, v, p;
    int t, key;
    scanf("%d", &n);
    for (int i = 0; i < n; i++){
        scanf("%d", &t);
        push(t);
    }
    while (1)
    {
        scanf("%d", &p);
        if(p==1)
            printf("%d\n", heap[1]);
        else if(p==2)
            printf("%d\n", pop());
        else if(p==3)
        {
            scanf("%d%d", &v, &key);
            change(v,key);
        }
        else if (p==4)
        {
            scanf("%d", &key);
            push(key);
        }
        else
            break;
    }
    return 0;
}