#include<iostream>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    if(n==3 || n==2)
    {
        cout<<"NO SOLUTION";
        return 0;
    }
    long long a[n];
    for(int i=0;i<n;i++)
    {
        a[i]=i+1;
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]%2==0) cout<<a[i]<<" ";
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]%2!=0) cout<<a[i]<<" ";
    }
    return 0;
}