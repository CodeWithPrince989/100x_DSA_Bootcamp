#include <iostream>
#include<string>
using namespace std;

int main() {
    int N;
    cin >> N;

    int A[N];
    for(int i=0; i<N; i++){
        cin>>A[i];
    }

    //Selection Sort
    for(int i = 0; i < N; i++)
    {
        // find min in the unsorted region
        // [i, N - 1] / [i, N)

        int mn = A[i];
        int loc = i;
        for(int j = i + 1; j < N; j++)
        {
               if(A[j] < mn)
                {
                    mn = A[j];
                    loc = j;
                }
        }    

        swap(A[i], A[loc]);
        cout << "Pass " << i + 1 << ": ";
        for (int k = 0; k < N; k++) {
            cout << A[k] << (k == N - 1 ? "" : " ");
        }
        cout << " , min_selected = " << A[i] << endl;
    }
    
    return 0;
}