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
        int n; cin>>n;
        if(n==1)
        {
            cout<<-1<<endl;
            continue;
        }
        vector<int> a;
        for(int i=0;i<n;i++)
        {
            int x; cin>>x;
            a.push_back(x);
        }
        sort(a.begin(),a.end());
        int i=n-1;
        while(i>=0 && a[i]==a[n-1]) i--;
        if(i<0)
        {
            cout<<-1<<endl;
            continue;
        }

        vector<int> b,c;
        for(int j=0;j<=i;j++) b.push_back(a[j]);

        for(int j=i+1;j<n;j++) c.push_back(a[j]);

        cout<<b.size()<<" "<<c.size()<<endl;
        for(int x:b) cout<<x<<" ";
        cout<<endl;
        for(int x:c) cout<<x<<" " ;
        cout<<endl;
    }
    return 0;
}