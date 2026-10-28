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
        int a,b,c; cin>>a>>b>>c;
        if(a>b) cout<<"First"<<endl;
        if(a<b) cout<<"Second"<<endl;
        if(a==b)
        {
            if(c%2==0) cout<<"Second"<<endl;
            else cout<<"First"<<endl;
        }
    }
    return 0;
}