#include <iostream>
#include <vector>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        long long n,k;cin>>n>>k;
        if(n%2==0 || (k%2==1 && n>=k)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
