#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <string>
using namespace std;

int bp, ep , heap[300100];
//base 1
void push(int data){
    int i= ep;
    while(i > bp && heap[i-1] < data){
        heap[i] = heap[i-1];
        i--;
    }
    heap[i] = data;
    ep++;
}

int pop(){
    int data = heap[bp];
    bp++;
    return data;
}


void change(int pos, int key)
{
    int i = bp + pos -1;
    if(heap[i] > key){
        printf("-1\n");
        return;
    }
    while(i > bp && heap[i-1] < key){
        heap[i] = heap[i-1];
        i--;
    }
    heap[i] = key;
}

int main()
{
    int n, v, p;
    int t, key;
    scanf("%d", &n);
    for (int i = 0; i < n; i++){
        scanf("%d", &heap[i]);
    }

    sort(heap, heap+n, greater<int>());
    bp=0; ep=n;

    while (1)
    {
        scanf("%d", &p);
        if(p==1)
            printf("%d\n", heap[bp]);
        else if(p==2)
            printf("%d\n", pop());
        else if(p==3)
        {
            scanf("%d%d", &v, &key);
            change(v+1 ,key);
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
