    //    A   
    //   ABA  
    //  ABCBA 
    // ABCDCBA



#include <iostream>
using namespace std;

int main() {
  int n = 4;

  for(int i=0; i<n; i++) {

    for(int j=0; j<n-i-1; j++) {
      cout << "  ";
    }

    char ch = 'A';
    for(int j=0; j<i+1; j++) {
      cout << ch << " ";
      ch++;
    }

    ch -=2;
    for(int j=0; j<i; j++) {
      cout << ch << " ";
      ch--;
    }

    cout << endl;

  }
  return 0;
}