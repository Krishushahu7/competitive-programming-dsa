#include <iostream>
#include <vector>
#include<algorithm>
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
        bool unso=false;
        for(int i=0;i<n;i++)
        {
            int x; cin>>x;
            a.push_back(x);
            if(i>0) if(a[i]<a[i-1]) unso=true;
        }
        if(unso)
        {
            cout<<0<<endl; continue;
        }
        int mindif=a[1]-a[0];
        for(int i=1;i<n-1;i++)
        {
            int cdif=-a[i]+a[1+i];
            mindif=min(mindif,cdif);
        }
        cout<<(mindif/2)+1<<endl;
    }
    return 0;
}