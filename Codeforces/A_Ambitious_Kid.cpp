#include <iostream>
#include <vector>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n; cin>>n;
    int least; cin>>least;
    least=abs(least);
    n--;
    while(n--)
    {
        int x; cin>>x;
        least=min(abs(x),least);
    }
    cout<<least<<endl;
    return 0;
}