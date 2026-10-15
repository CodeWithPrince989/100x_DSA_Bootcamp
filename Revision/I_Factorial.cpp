#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n;
    cin >> n;

    long long sum = 1;

    for(int i=1; i<=n; i++){
        sum*=i;
    }

    cout << sum << "\n";
    return 0;
}
