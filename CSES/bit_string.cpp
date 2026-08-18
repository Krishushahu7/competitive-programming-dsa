#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    cin>>n;
    long long ans=1;
    long long mod=pow(10,9)+7;
    for(int i=0;i<n;i++) ans=(ans*2)%mod;
    cout<<ans;
    return 0;
}