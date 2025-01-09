#include <iostream>
using namespace std;

int main() {
  int n = 6;

  for (int i=0; i<n; i++) {
    char ch = 'A';                  // in ascii A = 65;

    for (int j=0; j<n; j++) {
      cout << ch << " ";
      ch++;                         // 65 + 1 = 66 = B
    }

    cout << endl;
  }

  return 0;
}