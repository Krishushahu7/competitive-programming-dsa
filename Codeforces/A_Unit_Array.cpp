#include <iostream>
#include <vector>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while(t--)
    {
        int n;cin>>n;
        vector<int> a;
        int neg=0;
        for(int i=0;i<n;i++)
        {
            int x;cin>>x;
            a.push_back(x);
            if(x==-1) neg++;
        }
        int pos=n-neg;
        int ans=0;
        while(neg>pos || neg%2==1)
        {
            neg--;
            pos++;
            ans++;
        }
        cout<<ans<<endl;
    }
    return 0;
}