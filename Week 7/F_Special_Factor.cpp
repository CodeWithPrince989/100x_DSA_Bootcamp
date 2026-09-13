#include <iostream>
using namespace std;

int main() {
  int n;
      cin >> n;

      bool found = false; // Flag to track if any special factor is found

      for (int i = 1; i <= n; i++) {
          if (n % i == 0) {
              int last_digit = i % 10;
              if (last_digit == 2 || last_digit == 7) {
                  cout << i << " ";
                  found = true;
              }
          }
      }

      // Only print -1 if no special factors were printed
      if (!found) {
          cout << "-1";
      }

      cout << "\n";
      return 0;
  }