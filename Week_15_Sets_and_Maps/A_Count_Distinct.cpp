#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    
    set<long long> distinct_elements;
    for (int i = 0; i < n; i++) {
        long long x;
        cin >> x;
        distinct_elements.insert(x); // Sabhi elements set mein daal diye, duplicates apne aap hat jayenge
    }

    // Set ka size hi distinct elements ki total count hai
    cout << distinct_elements.size() << "\n";

    return 0;
}