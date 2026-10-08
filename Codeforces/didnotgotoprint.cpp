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
        int n; cin>>n;
        string s; cin>>s;

        stack<int> st;
        bool printed[n+1]={false};

        for(int i=1;i<=n;i++)
        {
            if(s[i-1]=='1') st.push(i);
            else if(s[i-1]=='2')
            {
                if(!st.empty())
                {
                    printed[st.top()]=true;
                    st.pop();
                }
                else printed[i]=true;
            }
            else printed[i]=true;
        }


        int cnt=0;
        for(int i=1;i<=n;i++) if(!printed[i]) cnt++;
        cout<<cnt<<endl;

        for(int i=1;i<=n;i++) if(!printed[i]) cout<<i<<" ";
        cout<<endl;
    }
    return 0;
}