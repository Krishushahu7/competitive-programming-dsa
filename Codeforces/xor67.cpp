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

        vector<long long> basis(31, 0);

        for (int i = 0; i < n; i++) {
            long long x;
            cin >> x;

            for (int b = 30; b >= 0; b--) {
                if (!(x & (1LL << b))) continue;

                if (!basis[b]) {
                    basis[b] = x;
                    break;
                }

                x ^= basis[b];
            }
        }

        long long ans = 0;
        for (int b = 30; b >= 0; b--) {
            if ((ans ^ basis[b]) > ans) {
                ans ^= basis[b];  // FIXED
            }
        }

        cout << ans << "\n";
    }

    return 0;
}