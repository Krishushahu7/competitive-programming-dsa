#include <bits/stdc++.h>
using namespace std;

struct BIT {
    int n;
    vector<int> bit;

    BIT(int n) : n(n), bit(n + 1, 0) {}

    void add(int idx, int val) {
        while (idx <= n) {
            bit[idx] += val;
            idx += idx & -idx;
        }
    }

    int sum(int idx) {
        int res = 0;
        while (idx > 0) {
            res += bit[idx];
            idx -= idx & -idx;
        }
        return res;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<long long> a(n), b(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];

        vector<vector<int>> starts(n + 1);
        bool ok = true;

        for (int i = 0; i < n; i++) {
            int need = lower_bound(b.begin(), b.end(), a[i]) - b.begin() + 1;

            if (need > n) {
                ok = false;
            } else {
                starts[need].push_back(i + 1);
            }
        }

        if (!ok) {
            cout << -1 << '\n';
            continue;
        }

        priority_queue<int, vector<int>, greater<int>> pq;
        vector<int> order;

        for (int target = 1; target <= n; target++) {
            for (int pos : starts[target]) {
                pq.push(pos);
            }

            if (pq.empty()) {
                ok = false;
                break;
            }
            order.push_back(pq.top());
            pq.pop();
        }
        if (!ok) {
            cout << -1 << '\n';
            continue;
        }
        BIT ft(n);
        long long ans = 0;
        for (int i = 0; i < n; i++) {
            int pos = order[i];

            int previous = i;
            int previousSmaller = ft.sum(pos);
            ans += previous - previousSmaller;

            ft.add(pos, 1);
        }
        cout << ans << '\n';
    }
    return 0;
}