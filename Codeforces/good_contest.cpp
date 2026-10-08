#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[3];
        for(int i=0;i<3;i++) cin>>a[i];
        int minimum=a[0];
        for(int i=1;i<3;i++)
        {
            if(minimum>a[i]) minimum=a[i];
        }
        cout<<(n-minimum)<<endl;
    }
    return 0;
}