#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin>>s;
    int n=s.length();
    int count=1;
    int mcount=1;
    for(int i=1;i<n;i++)
    {
        if(s[i]==s[i-1])
        {
            count++;
            mcount=max(count,mcount);
        }
        else count=1;
    }
    cout<<mcount;
    return 0;
}