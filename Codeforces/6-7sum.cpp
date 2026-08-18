#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--)
    {
        int a[7];
        int sum=0;
        for(int i=0;i<7;i++)
        {
            cin>>a[i];
            sum=sum+a[i];
        }
        sort(a,a+7);
        cout<<2*a[6]-sum<<endl;
    }
    return 0;
}