#include <iostream>
using namespace std;

int calcSum(int n) {
  int sum = 0;

  for(int i=0; i<=n; i++) {
    sum += i;
  }
  return sum;
}


int main() {

  cout << "total sum is: " << calcSum(10) << endl;;

  return 0;
}