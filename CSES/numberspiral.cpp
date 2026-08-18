#include<iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t;
    cin>>t;
    while(t--)
    {
        long long x,y;
        cin>>y>>x;
        long long k=max(x,y);
        long long mval=k*k;
        long long op;
        if(y<x)
        {
            if(k%2!=0)
                op=mval-(y-1);
            else
                op=(k-1)*(k-1)+y;
        }
        else
        {
            if(k%2!=0)
                op=(k-1)*(k-1)+x;
            else
                op=mval-(x-1);
        }
        cout<<op<<'\n';
    }
    return 0;
}