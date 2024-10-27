// #include<iostream>
// using namespace std;
// int main() {
//     for (int i = 1; i <= 5; i = i + 1) {
//         for (int j = 1; j <= 5 - i; j = j + 1) {
//             cout << " ";
//         }
//         for (int j = 1; j <= i; j = j + 1) {
//             cout << "*";
//         }
//         cout << endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int main() {
//     for (int i = 1; i <= 4; i = i + 1) {
//         for (int j = 1; j <= 4 - i; j = j + 1) {
//             cout << " ";
//         }
//         for (int j = 1; j <= i; j = j + 1) {
//             cout << i;
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
//         cout << endl;
//     }
// }

#include<iostream>
using namespace std;
int main() {
    for (int i = 1; i <= 5; i = i + 1) {
        for (int j = 1; j <= 5 - i; j = j + 1) {
        }
        for (char name = 'A'; name <= 'A' + i - 1; name = name + 1) {
            cout << name << " ";
        }
        cout << endl;
    }
}
