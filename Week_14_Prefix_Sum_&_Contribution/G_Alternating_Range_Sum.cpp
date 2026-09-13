#include <iostream>
using namespace std;

// Maximum value of A[i]
const int MAX = 100005;

int divisors[MAX];
int a[100005];
int pref[100005];

void precompute() {
    // Har number ke divisors count karne ke liye Sieve jaisa method
    for (int i = 1; i < MAX; i++) {
        for (int j = i; j < MAX; j += i) {
            divisors[j]++;
        }
    }
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    precompute();

    int n, q, k;
    cin >> n >> q >> k;

    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    // Prefix sum array banate waqt check karo ki divisors == k hai ya nahi
    pref[0] = 0;
    for (int i = 1; i <= n; i++) {
        int matches = (divisors[a[i]] == k) ? 1 : 0;
        pref[i] = pref[i - 1] + matches;
    }

    // Queries process karo O(1) mein
    while (q--) {
        int l, r;
        cin >> l >> r;
        
        int ans = pref[r] - pref[l - 1];
        cout << ans << "\n";
    }

    return 0;
}