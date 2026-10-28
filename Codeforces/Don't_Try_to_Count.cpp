#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--)
    {
        int n,m;cin>>n>>m;
        string x; cin>>x;
        string s; cin>>s;
        int count=0;
        while(x.find(s) == string::npos && count<6)
        {
            x=x+x;
            count++;
        }
        if(x.find(s) != string::npos)
        cout<<count<<endl;
        else cout<<"-1"<<endl;
    }
    return 0;
}