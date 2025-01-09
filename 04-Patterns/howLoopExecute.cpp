// Initialization (int i = 0) runs once at the start.
// Condition (i < n) is checked before every iteration.
// Increment (i++) happens after each iteration.
// If the condition becomes false, the loop stops.


#include <iostream>
using namespace std;

int main() {
  int n = 10;

  for (int i=0; i<n; i++) {
    cout << i << endl;
  }

  return 0;
}