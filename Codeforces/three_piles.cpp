#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long t;
    cin >> t;
    while (t--)
    {
        long long a,b,c;
        cin>>a>>b>>c;
        if(a>=b)
        {
            cout<<a-b+c<<endl;
        }
        else
        {
            long long d=abs(a-b);
            cout<<max(d,c-d)<<'\n';
        }
    }
    return 0;
}