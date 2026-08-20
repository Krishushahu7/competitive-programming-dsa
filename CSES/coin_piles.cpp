#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t;
    cin>>t;
    while(t--)
    {
        long long a,b;
        cin>>a>>b;
        if((max(a,b)<=2*min(a,b)) && (a+b)%3==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}