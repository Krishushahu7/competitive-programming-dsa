#include <iostream>
#include <string>
#include <algorithm>
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
        int ans=0,count=0;
        for(char c:s)
        {
            if(c=='#') count++;
            else{
                ans=max(ans,(count+1)/2);
                count=0; 
            }
        }
        ans = max(ans, (count + 1) / 2);

        cout << ans << '\n';
    }
    return 0;
}