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
        int n,k,x;cin>>n>>k>>x;
        if(x!=1)
        {
            cout<<"YES"<<endl;
            cout<<n<<endl;
            for(int i=0;i<n;i++) cout<<1<<" ";
            cout<<endl;
        }
        else if(k==1) cout<<"NO"<<endl;
        else if(k==2)
        {
            if(n % 2 == 1) cout<<"NO"<<endl;
            else
            {
                cout<<"YES"<<endl;
                cout<<n/2<<endl;
                for(int i=0;i<n/2; i++) cout<<2<<" ";
                cout <<endl;
            }
        }
        else
        {
            cout<<"YES"<<endl;
            if(n%2==0)
            {
                cout<<n/2<<endl;
                for(int i=0;i<n/2;i++) cout<<2<<" ";
            }
            else
            {
                cout<<(n-1)/2<<endl;
                cout<<3<<endl;
                for(int i=0;i<(n-3)/2;i++) cout<<2<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}