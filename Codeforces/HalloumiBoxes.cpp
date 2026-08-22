#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--)
    {
        int n, k;
        cin >> n >> k;

        vector<long long> a(n);

        for(int i = 0; i < n; i++)
            cin >> a[i];

        if(k > 1)
        {
            cout << "YES\n";
        }
        else
        {
            bool sorted = true;

            for(int i = 1; i < n; i++)
            {
                if(a[i] < a[i-1])
                {
                    sorted = false;
                    break;
                }
            }

            cout << (sorted ? "YES\n" : "NO\n");
        }
    }

    return 0;
}