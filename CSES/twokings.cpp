#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    cin>>n;
    for(long long k=1;k<=n;k++)
    {
        long long total=k*k*((k*k)-1)/2;
        long long attack=4*(k-1)*(k-2);
        long long ans=total-attack;
        cout<<ans<<endl;
    }
    return 0;
}