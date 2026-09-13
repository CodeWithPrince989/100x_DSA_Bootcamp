#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        int a[n];

        for (int j = 0; j < n; j++) {
            cin >> a[j]; 
        }

        int target;
        cin>>target;
        int sum;
        int cnt = 0; // 1. FIXED: Initialised count to 0 inside the loop for each test case

        // 2. FIXED: Changed loop start bounds so indices stay unique and don't overlap (k < l < m)
        for(int k=0; k<n; k++){
            for(int l=k+1; l<n; l++){
                for(int m=l+1; m<n; m++){
                    sum = a[k]+ a[l]+ a[m];
                        if(sum==target){
                            cnt+=1;
                        }
                }
            }
        }
        cout << cnt << endl; // 3. FIXED: Moved output inside the loop to print for each testcase
    }

    return 0;
}
