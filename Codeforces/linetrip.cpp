#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int st[n];
        for(int i=0;i<n;i++) cin>>st[i];
        int ans=st[0];
        for(int i=1;i<n;i++)
        {
            ans=max(ans,(st[i]-st[i-1]));
        }
        ans=max(ans,(2*(x-st[n-1    ])));
        cout<<ans<<endl;
    }
    return 0;
}