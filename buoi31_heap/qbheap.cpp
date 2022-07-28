#include<bits/stdc++.h>
using namespace std;
long long const maxn=15001;
long long heap[maxn];
long long nheap=0;
long long v,maxheap;
void upheap(long long i)
{
    if(i==1||heap[i]<heap[i/2])
        return;
    swap(heap[i],heap[i/2]);
    upheap(i/2);
}
void downheap(int i)
{
    long long left=i*2, right=i*2+1, j=left;
    if (left > nheap)
        return;
    if (left < nheap && heap[right] > heap[left])
        j = right;
    if (heap[i] < heap[j])
    {
        swap(heap[i], heap[j]);
        downheap(i);
    }
}
void push(long long x)
{
    nheap++;
    heap[nheap]=x;
    upheap(nheap);
}
void pop()
{
    maxheap=heap[1];
    heap[1]=heap[nheap];
    nheap--;
    downheap(1);

}

int main()
{
    freopen("qbheap.inp","r",stdin);
    freopen("qbheap.out","w",stdout);
    char type;

    while (cin >> type)
    {
        if (type == '+')
        {
            cin >> v;
            if (nheap <= 15000)
                push(v);
        }
        if(type=='-')
        {
            if (nheap > 0)
                pop();
            if(maxheap==heap[1] && nheap > 0)
                pop();
        }
    }

    vector < long long > E;

    while (nheap > 0)
    {
        if (E.empty() || heap[1] != E.back())
            E.push_back(heap[1]);
        pop();
    }

    cout << E.size() << endl;
    for(int i=0;i<=E.size()-1;i++)
         if(E[i]!=E[i+1])
            cout<<E[i];
}
