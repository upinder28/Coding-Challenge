// #include<iostream>
// using namespace std;
// int main() {
//     for (int i = 1; i <= 20; i++) {
//         cout << "India will win the World Cup 2023" << endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int main() {
//     int n;
//     cout << "Enter the number :- " << endl;
//     cin >> n;
//     for (int i = 1; i <= n; i = i + 2) {
//         cout << i << endl;
//     }
// }

#include<iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the number :- " << endl;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        if (i % 4 == 0) {
            cout << i << endl;
        }
    }
}
