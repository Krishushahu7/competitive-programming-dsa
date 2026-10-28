#include <iostream>
#include <vector>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int> a;
        for(int i=0;i<n;i++){ int x; cin>>x; a.push_back(x);}
        bool found=false;
        for(int i=0;i<n;i++) if(a[i]==k){ found=true; break;}
        if(found) cout<<"YES"<<endl; else cout<<"NO"<<endl;
    }   
    return 0;
}