// #include<iostream>
// using namespace std;
// int main() {
//     for (int i = 1; i <= 5; i = i + 1) {
//         for (int j = 1; j <= i; j = j + 1) {
//             cout <<"*"<< " ";
//         }
//         cout << endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int main() {
//     for (int i = 1; i <= 5; i = i + 1) {
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
//             cout << i << " ";
//         }
//         cout << endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int main() {
//     for (int i = 1; i <= 5; i = i + 1) {
//         for (int j = i; j >= 1; j = j - 1) {
//             cout << j << " ";
//         }
//         cout << endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int main() {
//     for (int i = 1; i <= 5; i = i + 1) {
//         char name = 'a' + i - 1;
//         for (int j = 1; j <= i; j = j + 1) {
//             cout << name << " ";
//         }
//         cout << endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int main() {
//     for (int i = 1; i <= 5; i = i + 1) {
//         for (int j = 1; j <= 5 - (i - 1); j = j + 1) {
//             cout << "*" << " ";
//         }
//         cout << endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int main() {
//     for (int i = 1; i <= 5; i = i + 1) {
//         for (int j = 1; j <= 5 - (i - 1); j = j + 1) {
//             cout << j << " ";
//         }
//         cout << endl;
//     }
// }

#include<iostream>
using namespace std;
int main() {
    for (int i = 1; i <= 5; i = i + 1) {
        for (int j = 5; j >= 5 - (i - 1); j = j - 1) {
            cout << j << " ";
        }
        cout << endl;
    }
}
