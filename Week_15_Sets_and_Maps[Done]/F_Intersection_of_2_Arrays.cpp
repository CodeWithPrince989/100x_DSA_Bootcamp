#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int m;
    cin >> m;
    int arr[m];
    for(int i=0; i<m; i++){
        cin>>arr[i];
    }
    int n;
    cin>>n;
    int arr2[n];
    for(int i=0; i<n; i++){
        cin>>arr2[i];
    }#include <iostream>
    #include <vector>
    #include <unordered_set>
    #include <algorithm>

    using namespace std;

    int main() {
        // Fast I/O
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);

        int n;
        cin >> n;
        unordered_set<long long> setA;
        for (int i = 0; i < n; ++i) {
            long long val;
            cin >> val;
            setA.insert(val);
        }

        int m;
        cin >> m;
        unordered_set<long long> intersection;
        for (int i = 0; i < m; ++i) {
            long long val;
            cin >> val;
            if (setA.count(val)) {
                intersection.insert(val);
            }
        }

        // Transfer to a vector to sort in increasing order
        vector<long long> result(intersection.begin(), intersection.end());
        sort(result.begin(), result.end());

        // Print the number of elements and the elements themselves
        int k = result.size();
        cout << k << "\n";
        if (k > 0) {
            for (int i = 0; i < k; ++i) {
                cout << result[i] << (i == k - 1 ? "" : " ");
            }
            cout << "\n";
        }

        return 0;
    }

    intersection(arr,arr2,m,n);
    

    return 0;
}