// #include <iostream>
// using namespace std;

// int main() {

//   int n = 4;
//   char ch = 'A';

//   for (int i=0; i<n; i++) {


    // for (int j=i+1; j>0; j--) {
    //   cout << j << " ";
    // }
    // cout << endl;
    
//   }

//   return 0;
// }




#include <iostream>
using namespace std;

int main() {
    int n = 4; // Number of rows
    char ch = 'A'; // Start from 'A'
    
    for (int i = 0; i < n; i++) {
        char current = ch + i; // Start character for the current row
        
        for (int j = 0; j <= i; j++) {
            cout << current-- << " "; // Print and decrement character
        }
        cout << endl; // Move to the next row
    }
    
    return 0;
}
