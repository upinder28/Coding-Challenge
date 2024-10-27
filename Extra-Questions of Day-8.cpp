// #include<iostream>
// using namespace std;
// int main() {
//     for (int i = 1; i <= 7; i = i + 1) {
//         for (int j = 1; j <= i; j = j + 1) {
//             cout << j << " ";
//         }
//         cout << endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int main() {
//     for (int i = 1; i <= 5; i = i + 1) {
//         for (int j = 1; j <= i; j = j + 1) {
//             char name = 'A' + (j - 1);
//             cout << name << " ";
//         }
//         cout << endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int main() {
//     for (int i = 10; i <= 15; i = i + 1) {
//         for (int j = 10; j <= i; j = j + 1) {
//             cout << i << " ";
//         }
//         cout << endl;
//     }
// }

#include<iostream>
using namespace std;
int main() {
    for (int i = 4; i >= 1; i = i - 1) {
        for (int j = 1; j <= i; j = j + 1) {
            char name = 'A' + (j - 1);
            cout << name << " ";
        }
        cout << endl;
    }
}
