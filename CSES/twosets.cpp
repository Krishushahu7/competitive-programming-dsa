#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    cin>>n;
    long long s=((n*(n+1))/2)%2;
    vector<int>s1;
    vector<int>s2;
    if(s!=0)
    {
        cout<<"NO";
        return 0;
    }
    if(n%4==0)
    {
        for(int a=1;a<=n;a+=4)
        {
            s1.push_back(a);
            s1.push_back(a+3);
            s2.push_back(a+1);
            s2.push_back(a+2);
        }
    }
    else if(n%4==3)
    {
        s1.push_back(1);
        s1.push_back(2);
        s2.push_back(3);
        for(int a=4;a<=n;a+=4)
        {
            s1.push_back(a);
            s1.push_back(a+3);
            s2.push_back(a+1);
            s2.push_back(a+2);
        }
    }
    else
    {
        cout<<"NO";
        return 0;
    }
    cout<<"YES"<<endl;
    cout<<s1.size()<<endl;
    for(int x:s1) cout<<x<<" ";
    cout<<endl;
    cout<<s2.size()<<endl;
    for(int x:s2) cout<<x<<" ";
    cout<<endl;
    return 0;
}