#include <iostream>
using namespace std;

long long a[100005];
long long pref[100005];

// Helper function to calculate digit sum of a number
int getDigitSum(long long num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, q;
    long long k;
    cin >> n >> q >> k;

    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    // Prefix sum array banate waqt check karo ki digit sum == k hai ya nahi
    pref[0] = 0;
    for (int i = 1; i <= n; i++) {
        int matches = (getDigitSum(a[i]) == k) ? 1 : 0;
        pref[i] = pref[i - 1] + matches;
    }

    // Queries process karo O(1) mein
    while (q--) {
        int l, r;
        cin >> l >> r;
        
        long long ans = pref[r] - pref[l - 1];
        cout << ans << "\n";
    }

    return 0;
}