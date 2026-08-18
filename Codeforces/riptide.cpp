#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--)
    {
        int a[3];
        for(int i=0;i<3;i++) cin>>a[i];
        int ans=0;
        while((a[0]!=a[1])&&(a[1]!=a[2])&&(a[0]!=a[2]))
        {
            sort(a,a+3);
            a[0]++;
            a[2]--;
            ans++;
        }
        cout<<ans<<endl;
    }
    return 0;
}