#include <bits/stdc++.h>
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
        long long k;
        cin>>n>>k;
        vector<long long> a(n),b(n),c(n);
        long long low=LLONG_MAX;

        for(int i=0;i<n;i++)
        {
            cin>>a[i]>>b[i]>>c[i];
            low=min(low,a[i]+b[i]+c[i]);
        }

        auto check = [&](long long x)
        {
            long long need=0;
            for(int i=0;i<n;i++)
            {
                long long sum=a[i]+b[i]+c[i];
                if(sum>=x) continue;
                long long diff=x-sum;
                if(a[i]==b[i] && b[i]==c[i]) return false;
                if(!(a[i]<=b[i] && b[i]<=c[i])) need=need+diff;
                else
                {
                    long long extra=min(b[i]-a[i]+1,c[i]-b[i]+1);
                    need=need+diff+2*extra;
                }
                if(need>k) return false;
            }

            return need<=k;
        };

        long long high=low+k;
        while(low<high)
        {
            long long mid=low+(high-low+1)/2;
            if(check(mid)) low=mid;
            else high=mid-1;
        }
        cout<<low<<endl;
    }
    return 0;
}