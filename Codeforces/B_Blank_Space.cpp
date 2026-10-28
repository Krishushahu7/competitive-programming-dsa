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
        int n;cin>>n;
        int best=0;int current=0;
        for(int i=0;i<n;i++)
        {
            int x;cin>>x;
            if(x==0) current++;
            else current=0;
            best=max(best,current);
        }
        cout<<best<<endl;
    }
    return 0;
}
