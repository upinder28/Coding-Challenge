// #include<iostream>
// using namespace std;
// int main() {
//     for (int i = 1; i <= 5; i = i + 1) {
//         for (int j = 1; j <= 5 - i; j = j + 1) {
//             cout << "  ";  
//         }
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
//         for (int j = 1; j <= 5 - i; j = j + 1) {
//             cout << "  ";  
//         }
//         for (int j = 1; j <= i; j = j + 1) {
//             cout << char('A' + i - 1) << " ";  
//         }
//         cout << endl; 
//     }
// }

// #include<iostream>
// using namespace std;
// int main() {
//     for (int i = 1; i <= 5; i = i + 1) {
//         for (int j = 1; j <= 5 - i; j = j + 1) {
//             cout << "  ";  
//         }
//         for (int j = 5; j >= 6 - i; j = j - 1) {
//             cout << j << " "; 
//         }
//         cout << endl;  
//     }
// }

#include<iostream>
using namespace std;
int main() {
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5 - i; j++) {
            cout << "  ";  
        }
        for (char letter = 'E'; letter >= 'E' - i + 1; letter--) {
            cout << letter << " ";  
        }
        cout << endl;  
    }
}
