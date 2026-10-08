#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<long long> a(n);
        for (auto &x : a) cin >> x;
        int m = n - 4;
        vector<long long> val(m);

        for (int i = 0; i < m; i++) {
            val[i] = a[i] + a[i + 2] - a[i + 4];
        }
        long long ans = 0;
        unordered_map<long long, long long> freq;

        for (int i = 0; i < m; i++) {
            ans=ans+freq[val[i]];
            freq[val[i]]++;
        }

        for (int i = 0; i < m; i++) {
            if (i + 2 < m && val[i] == val[i + 2]) ans--;
            if (i + 4 < m && val[i] == val[i + 4]) ans--;
        }

        cout << ans << '\n';
    }

    return 0;
}