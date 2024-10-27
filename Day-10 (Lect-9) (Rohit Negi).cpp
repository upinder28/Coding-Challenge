// #include<iostream>
// using namespace std;
// int main() {
//     for (int i = 1; i <= 5; i = i + 1) {
//         for (int j = 1; j <= 5 - i; j = j + 1) {
//             cout << " ";
//         }
//         for (int j = 1; j <= 2 * i - 1; j = j + 1) {
//             cout << "*";
//         }
//         cout << endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int main() {
//     for (int i = 1; i <= 5; i = i + 1) {
//         for (int j = 1; j <= 5 - i; j = j + 1) {
//             cout << " ";
//         }
//         for (int j = 1; j <= i; j = j + 1) {
//             cout << j;
//         }
//         for (int j = i - 1; j >= 1; j = j - 1) {
//             cout << j;
//         }
//         cout << endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int main() {
//     for (int i = 5; i >= 1; i = i - 1) {
//         for (int j = 1; j <= 5 - i; j = j + 1) {
//             cout << " ";
//         }
//         for (int j = 1; j <= 2 * i - 1; j = j + 1) {
//             cout << "*" << " ";
//         }
//         cout << endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int main() {
//     for (int i = 4; i >= 1; i = i - 1) {
//         for (int j = 1; j <= i; j = j + 1) {
//             cout << "*";
//         }
//         for (int j = 1; j <= 2 * 4 - 2 * i; j = j + 1) {
//             cout << " ";
//         }
//         for (int j = 1; j <= i; j = j + 1) {
//             cout << "*";
//         }
//         cout << endl;
//     }
//     for (int i = 1; i <= 4; i = i + 1) {
//         for (int j = 1; j <= i; j = j + 1) {
//             cout << "*";
//         }
//         for (int j = 1; j <= 2 * 4 - 2 * i; j = j + 1) {
//             cout << " ";
//         }
//         for (int j = 1; j <= i; j = j + 1) {
//             cout << "*";
//         }
//         cout << endl;
//     }
// }

#include<iostream>
using namespace std;
int main() {
    for (int i = 1; i <= 4; i = i + 1) {
        for (int j = 1; j <= i; j = j + 1) {
            cout << "*";
        }
        for (int j = 1; j <= 2 * 4 - 2 * i; j = j + 1) {
            cout << " ";
        }
        for (int j = 1; j <= i; j = j + 1) {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 4 - 1; i >= 1; i = i - 1) {
        for (int j = 1; j <= i; j = j + 1) {
            cout << "*";
        }
        for (int j = 1; j <= 2 * 4 - 2 * i; j = j + 1) {
            cout << " ";
        }
        for (int j = 1; j <= i; j = j + 1) {
            cout << "*";
        }
        cout << endl;
    }
}
