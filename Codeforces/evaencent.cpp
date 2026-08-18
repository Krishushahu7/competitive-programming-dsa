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
        int n;
        cin>>n;
        string s;
        cin>>s;
        int iter=1;
        for(int i=1;i<n;i++) if(s[i]!=s[i-1]) iter++;
        int r=0;
        for(int i=1;i<n-1;i++)
        {
            if((s[i-1]==s[i+1]) && (s[i]!=s[i-1]))
            {
                r=2;
                break;
            }
            if ((s[i]!=s[i-1]) && (s[i]!=s[i+1])) 
            {
                r = max(r,1);
            }
        }
        cout<<iter-r<<endl;
    }
    return 0;
}