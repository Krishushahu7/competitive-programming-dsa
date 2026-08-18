#include<iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    cin>>n;
    long long sum=0;
    for(int i=1;i<n;i++)
    {
        long long x=0;
        cin>>x;
        sum=sum+x;
    }
    sum=((n*(n+1))/2)-sum;
    cout<<sum;
    return 0;
}