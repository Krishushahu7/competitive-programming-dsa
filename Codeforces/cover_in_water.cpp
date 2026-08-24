#include<iostream>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while(t--)
    {
        int n;cin>>n;
        string s;cin>>s;
        int current=0;int dots=0; bool three=false;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='.')
            {
                current++;
                dots++;
            }
            else current=0;
            if(current>=3) three=true;
        }
        if(three) cout<<2<<endl;
        else cout<<dots<<endl;
    }
    return 0;
}