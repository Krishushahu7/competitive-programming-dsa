#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        vector<long long> a(n),b(n);
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++) cin>>b[i];

        long long thegrilla=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]==b[i]) thegrilla+=2;
            else thegrilla+=1;

            if(i+1<n)
            {
                if(a[i+1]==b[i]) thegrilla+=2;
                else thegrilla+=1;
            }
        }

        long long ans=thegrilla;
        for(int i=n-2;i>=0;i--)
        {
            if(a[i]==b[i]) thegrilla-=2;
            else thegrilla-=1;

            if(a[i]==b[i+1]) thegrilla+=2;
            else thegrilla+=1;

            ans=max(ans,thegrilla);
        }
        cout<<ans<<endl;
    }

    return 0;
}