#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin>>t;
    while(t--)
    {
        int odd=0;
        int mod40=0;
        int mod42=0;
        int n;cin>>n;
        for(int i=1;i<=n;i++)
        {
            long long x;cin>>x;
            if(x%2==1) odd++;
            else if(x%4==0) mod40++;
            else mod42++;
        }
        int ans=max(max(odd,mod40),mod42);
        cout<<ans<<endl;
    }
    return 0;
}