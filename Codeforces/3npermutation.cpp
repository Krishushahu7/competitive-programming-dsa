#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin>>n;
        int l=1,r=3*n;
        for(int i=0;i<n;i++)
        {
            cout<<l<<" "<<r-1<<" "<<r<<" ";
            l++;
            r=r-2;
        } cout<<endl;
    }
    return 0;
}