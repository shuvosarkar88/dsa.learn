// #include <iostream>

// bool isPrime(int n) {
//     if (n <= 1) {
//         return false; // Numbers less than or equal to 1 are not prime.
//     }
//     if (n == 2) {
//         return true; // 2 is the only even prime number.
//     }
//     if (n % 2 == 0) {
//         return false; // Even numbers other than 2 are not prime.
//     }
//     // Check divisors from 3 to sqrt(n).
//     for (int i = 3; i * i <= n; i += 2) {
//         if (n % i == 0) {
//             return false;
//         }
//     }
//     return true;
// }

// int main() {
//     int num;
//     std::cout << "Enter a number: ";
//     std::cin >> num;

//     if (isPrime(num)) {
//         std::cout << num << " is prime" << std::endl;
//     } else {
//         std::cout << num << " is not prime" << std::endl;
//     }

//     return 0;
// }



