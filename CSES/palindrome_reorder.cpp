#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s; cin>>s;
    string left; char middle='\0';
    int freq[26]={};
    long long isodd=0;
    for(long long i=0;i<s.size();i++) freq[s[i]-'A']++;
    for(int i=0;i<26;i++) if((freq[i]%2)!=0) isodd++;
    if(isodd>1)
    {
        cout<<"NO SOLUTION";
        return 0;
    }
    for(int i=0;i<26;i++)
    {       
        int half=freq[i]/2;
        for(long long j=0;j<half;j++) left+=char('A'+i);
        if(freq[i]%2!=0) middle = char('A' + i);
    }
    string right=left;
    reverse(right.begin(),right.end());
    string ans=left;
    if(isodd) ans+=middle;
    ans+=right;
    cout<<ans;
    return 0;
}