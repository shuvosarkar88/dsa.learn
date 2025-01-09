#include <iostream>
using namespace std;

int main() {
  int n = 22;

  if (n < 0) {
    cout << "number less than 0 isn't prime\n";
  } else if (n == 2) {
    cout << n << " is prime\n";
  } else if (n % 2 == 0) {
    cout << n << " is not prime\n";
  } else {
    bool isPrime = true;
    for (int i = 3; i <= n / 2; i++) {
      if (n % i == 0) {
        isPrime = false;
        break;
      }
    }
    if (isPrime) {
      cout << n << " is prime\n";
    } else {
      cout << n << " is not prime\n";
    }
  }

  return 0;
}