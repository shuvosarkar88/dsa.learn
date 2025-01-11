#include <iostream>
#include <cmath>
using namespace std;

bool isPrime (int n) {
  if (n <= 0) return false;
  if (n == 2) return true;
  if (n%2 == 0) return false;

  for (int i=3; i<sqrt(n); i+=2) {
    if (n%i == 0) return false;
  }

  return true;
}

void prime_up_to_n(int n) {

  for(int i=2; i<=n; i++)
    if (isPrime(i)) {
      cout << i << " ";
    }
}

int main() { 
  int n;

  cout << "Enter yor no: ";
  cin >> n;
  
  cout << "Prime numbers from 2 to " << n << " are: ";
  prime_up_to_n(n);

  return 0;
}