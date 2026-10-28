#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        map<int,int> mp;
        for(int x:a)
        {
            mp[x]++;
        }
        bool good=false;
        if(n%2==1)
        {
            if(mp.size()==1) good=true;
            if(mp.size()==2)
            {
                auto itr=mp.begin();
                int f1=itr->second;
                itr++;
                int f2=itr->second;
                int odd=max(f1,f2);
                int even=min(f1,f2);
                if(odd==((n+1)/2) && even==(n/2)) good=true;
            }
        }
        else
        {
            if(mp.size()==1) good=true;
            if(mp.size()==2)
            {
                auto itr=mp.begin();
                int f1=itr->second;
                itr++;
                int f2=itr->second;
                if(f1==n/2 && f2==n/2) good=true;
            }
        }
        if(good) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}