// #include<iostream>
// using namespace std;
// int main() {
//      int n;
//     cout << "Enter a number: ";
//     cin >> n;

//     int i = 1;
//     cout << "Even numbers between 1 and " << n << " (using while loop):" << endl;
//     while (i <= n) {
//         if (i % 2 == 0) {
//             cout << i << " ";
//         }
//         i++;
//     }
//     cout << endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main() {
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;

//     int i = 1;
//     cout << "Even numbers between 1 and " << n << " (using do-while loop):" << endl;
//     do {
//         if (i % 2 == 0) {
//             cout << i << " ";
//         }
//         i++;
//     } while (i <= n);
//     cout << endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main() {
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;
//     int result = 1;
//     int i = 1;

//     while (i <= n) {
//         result *= i;
//         i++;
//     }
//     cout << "Factorial of " << n << " (using while loop) is: " << result << endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main() {
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;
//     int result = 1;
//     int i = 1;
//     do {
//         result *= i;
//         i++;
//     } while (i <= n);
//     cout << "Factorial of " << n << " (using do-while loop) is: " << result << endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main() {
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;
//     cout << "Numbers from 1 to " << n << " that are not divisible by both 3 and 5:" << endl;
//     for (int i = 1; i <= n; i++) {
//         if (i % 3 == 0 && i % 5 == 0) {
//             continue; 
//         }
//         cout << i << " ";
//     }
//     cout << endl;
// }

// #include<iostream>
// using namespace std;
// int main() {
//     int i;
//     cout << "Enter a number: ";
//     cin >> i;
//     switch (i) {
//         case 1: cout << "Jan";
//         break;
//         case 2: cout << "Feb";
//         break;
//         case 3: cout << "Mar";
//         break;
//         case 4: cout << "April";
//         break;
//         case 5: cout << "May";
//         break;
//         case 6: cout << "June";
//         break;
//         case 7: cout << "July";
//         break;
//         case 8: cout << "Aug";
//         break;
//         case 9: cout << "Sep";
//         break;
//         case 10: cout << "Oct";
//         break;
//         case 11: cout << "Nov";
//         break;
//         case 12: cout << "Dec";
//         break;
//         default : cout << "Enter a valid number";
//     }
// }

// #include<iostream>
// using namespace std;
// int main() {
//     char ch = 'A';
//     cout << "Capital letters (A-Z):" << endl;
//     while (ch <= 'Z') {
//         cout << ch << " ";
//         ch++;
//     }
//     cout << endl;
//     ch = 'a';
//     cout << "Small letters (a-z):" << endl;
//     while (ch <= 'z') {
//         cout << ch << " ";
//         ch++;
//     }
//     cout << endl;
// }

#include<iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (n <= 1) {
        cout << n << " is not a prime number." << endl;
        return 0;
    }
    int i = 2;
    while (i * i <= n) {
        if (n % i == 0) {
            cout << n << " is not a prime number." << endl;
            return 0; 
        }
        i++;
    }
    cout << n << " is a prime number." << endl;
    return 0;
}
