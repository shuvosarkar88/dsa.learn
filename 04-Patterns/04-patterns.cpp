// #include <iostream>
// using namespace std;

// int main() {

//   int n = 5;
//   int stars = 1;

//   for (int i=0; i<n; i++) {

//     for (int j=0; j<stars; j++) {
//       cout << "* ";
//     }
//     stars++;

//     cout << endl;
//   }


//   return 0;
// }



#include <iostream>
using namespace std;

int main() {

  int n = 5;

  for (int i=0; i<n; i++) {

    for (int j=0; j<i+1; j++) {
      cout << "* ";
    }

    cout << endl;
  }


  return 0;
}