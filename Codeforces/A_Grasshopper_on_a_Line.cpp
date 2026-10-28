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
        int x,k; cin>>x>>k;
        if(x%k!=0)
        {
            cout<<1<<endl;
            cout<<x<<endl;
            continue;
        }
        else
        {
            cout<<2<<endl;
            cout<<1<<" "<<x-1<<endl;
        }
    }
    return 0;
}