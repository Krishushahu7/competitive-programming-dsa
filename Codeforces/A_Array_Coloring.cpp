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
        int sum=0;
        for(int i=0;i<n;i++)
        {
            int x; cin>>x;
            a.push_back(x);
            sum=sum+x;
        }
        if(sum%2==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}