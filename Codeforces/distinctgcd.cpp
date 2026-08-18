#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    const int MAXN = 200000;
    vector<int> primes;
    vector<bool> isPrime(MAXN, true);

    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i < MAXN; i++) {
        if (isPrime[i]) {
            primes.push_back(i);
            for (long long j = 1LL * i * i; j < MAXN; j += i)
                isPrime[j] = false;
        }
    }
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        for (int i = 0; i < n; i++) {
            long long val = 1LL * primes[i] * primes[i + 1];
            cout << val << " ";
        }
        cout << "\n";
    }

    return 0;
}