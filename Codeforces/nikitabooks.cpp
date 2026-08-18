#include <iostream>
#include <string>
#include <algorithm>
#include<vector>
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
        vector<long long> a(n);
        for(int i=0;i<n;i++ ) cin>>a[i];

        long long prev = 1;
        long long carry = a[0] - 1;
        bool ok = (a[0] >= 1);

        for(int i=1;i<n && ok ; i++)
        {
        long long current = a[i] +carry;
        long long need=prev+1;
        if(current<need) {ok =false; break;}
        carry = current-need;
        prev=need;
        }

        cout<<(ok?"YES":"NO")<< '\n';
    }
    return 0;
}