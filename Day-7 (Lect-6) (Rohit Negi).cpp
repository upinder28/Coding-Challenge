// #include<iostream>
// using namespace std;
// int main() {
//     for (int i = 1; i <= 5; i = i + 1) {
//         cout << "*" << " ";
//     }
// }

// #include<iostream>
// using namespace std;
// int main() {
//     for (int i = 1; i <= 5; i = i + 1) {
//         for (int j = 1; j <= 5; j = j + 1) {
//             cout << "*" << " ";
//         }
//         cout << endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int main() {
//     for (int i = 1; i <= 5; i = i + 1) {
//         for (int j = 1; j <= 5; j = j + 1) {
//             cout << "10" << " ";
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
//         for (int j = 1; j <= 5; j = j + 1) {
//             cout << i << " ";
//         }
//         cout << endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int main() {
//     for (int i = 1; i <= 5; i = i + 1) {
//         for (int j = 1; j <= 5; j = j + 1) {
//             cout << j << " ";
//         }
//         cout << endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int main() {
//     for (int i = 5; i >= 1; i = i - 1) {
//         for (int j = 5; j >= 1; j = j - 1) {
//             cout << j << " ";
//         }
//         cout << endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int main() {
//     for (int i = 1; i <= 5; i = i + 1) {
//         for (int j = 1; j <= 5; j = j + 1) {
//             cout << j * j << " ";
//         }
//         cout << endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int main() {
//     for (char name = 'a'; name <= 'e'; name = name + 1) {
//         for (char name1  = 'a'; name1 <= 'e'; name1 = name1 + 1) {
//             cout << name1 << " ";
//         }
//         cout << endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int main() {
//     for (int i = 1; i <= 5; i = i + 1) {
//         for (char j = 'a'; j <= 'e'; j = j + 1) {
//             cout << j << " ";
//         }
//         cout << endl;
//     }
// }

#include<iostream>
using namespace std;
int main() {
    int count = 1;
    for (int i = 1; i <= 5; i = i + 1) {
        for (int j = 1; j <= 5; j = j + 1) {
            cout << count << " ";
            count = count + 1;
        }
        cout << endl;
    }
}
