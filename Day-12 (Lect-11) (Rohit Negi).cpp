// #include<iostream>
// using namespace std;
// int main() {
//     int i = 1;
//     while (i <= 10) {
//         cout << i << endl;
//         i++;
//     }
// }

// #include<iostream>
// using namespace std;
// int main() {
//     int n = 2;
//     int i = 1;
//     while (i <= 10) {
//         cout << n * i << endl;
//         i++;
//     }
// }

// #include<iostream>
// using namespace std;
// int main() {
//     int n = 10;
//     int i = 1;
//     while (i <= 10) {
//         if (n % i == 0) {
//             cout << i << endl;
//             i++;
//         }
//     }
// }

// #include<iostream>
// using namespace std;
// int main() {
//     int i = 1;
//     do {
//         cout << i << endl;
//         i++;
//     } while (i <= 10);
// }

// #include<iostream>
// using namespace std;
// int main() {
//     int sum = 0;
//     int i = 1;
//     do {
//         sum += i;
//         i++;
//     } while (i <= 10);
// }

// #include<iostream>
// using namespace std;
// int main() {
//     int i = 1;
//     while (i <= 10) {
//         if (i == 4) {
//             break;
//         }
//         cout << i << endl;
//         i++;
//     }
// }

// #include<iostream>
// using namespace std;
// int main() {
//     for (int i = 1; i <= 10; i = i + 1) {
//         if (i % 4 == 0) {
//             continue;
//         }
//         cout << i << endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int main() {
//     int i;
//     cout << "Enter a number: ";
//     cin >> i;
//     switch (i) {
//         case 1: cout << "Rohit";
//         break;
//         case 2: cout << "Rahul";
//         break;
//         case 3: cout << "Raj";
//         break;
//         default : cout << "Hello";
//     }
// }

#include<iostream>
using namespace std;
int main() {
    int i;
    cout << "Enter a number: ";
    cin >> i;
    switch (i) {
        case 1: cout << "Monday";
        break;
        case 2: cout << "Tuesday";
        break;
        case 3: cout << "Wednesday";
        break;
        case 4: cout << "Thursday";
        break;
        case 5: cout << "Friday";
        break;
        case 6: cout << "Saturday";
        break;
        case 7: cout << "Sunday";
        break;
        default : cout << "Enter a valid number";
    }
}
