#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while (T--) {
        int n;
        string s;
        cin >> n >> s;
        ll cnt[3] = {1, 0, 0};
        int pref = 0;
        ll badSameMod = 0;
        for (char c : s) {
            if (c == '0') pref++;
            else pref--;
            pref %= 3;
            if (pref < 0) pref += 3;
            badSameMod += cnt[pref];
            cnt[pref]++;
        }
        ll total = 1LL * n * (n + 1) / 2;
        ll ans = total - badSameMod;
        ll alternatingBad = 0;
        int len = 1;
        auto countOddAtLeast3 = [](ll L) -> ll {
            ll oddPos = (L + 1) / 2;
            ll evenPos = L / 2;
            ll oddLengthSubstrings =
                oddPos * (oddPos + 1) / 2 +
                evenPos * (evenPos + 1) / 2;

            return oddLengthSubstrings - L; // remove length 1
        };
        for (int i = 1; i <= n; i++) {
            if (i < n && s[i] != s[i - 1]) {
                len++;
            } else {
                alternatingBad += countOddAtLeast3(len);
                len = 1;
            }
        }
        ans -= alternatingBad;
        cout << ans << '\n';
    }
    return 0;
}