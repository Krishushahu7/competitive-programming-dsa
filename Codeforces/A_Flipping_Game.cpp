#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    
        int n;cin>>n;
        vector<int> a;
        int one=0;
        for(int i=0;i<n;i++)
        {
            int x;cin>>x;
            a.push_back(x);
            if(x==1) one++;
        }
        int val;
        int best=-1;
        int current=-1;
        for(int i=0;i<n;i++)
        {
            if(a[i]==0) val=1;
            else val=-1;
            current=max(current+val,val);
            best=max(current,best);
        }
        cout<<best+one<<endl;
    
    return 0;
}