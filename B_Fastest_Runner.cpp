#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int min_time = arr[0];
    int runner_id = 1;

    for(int j=0; j<n; j++){
      if(arr[j] <= min_time){
        min_time = arr[j];
        runner_id = j + 1; // IDs are 1-indexed
      }
    }

    cout << runner_id;

    return 0;
}