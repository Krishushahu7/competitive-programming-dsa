#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while(t--)
    {
        int n;
        string s;cin>>n>>s;
        if(s[0]=='1')
        {
            cout<<count(s.begin(),s.end(),'0')<<'\n';
            continue;
        }
        int zero=count(s.begin(),s.end(),'0');
        int pref=0;
        int ans=zero;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='0') zero--;
            else pref++;
            ans=min(ans,zero+pref);
        }
        cout<<ans<<endl;
    }
    return 0;
}