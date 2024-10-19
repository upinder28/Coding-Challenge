// #include<iostream>
// using namespace std;
// int main() {
//     for (int count = 1; count <= 5; count++) {
//         cout << "Hello World" << endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int main() {
//     int n;
//     cout << "Enter the number :- " << endl;
//     cin >> n;
//     for (int count = 1; count <= n; count++) {
//         cout << count << endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int main() {
//     int n;
//     cout << "Enter the number :- " << endl;
//     cin >> n;
//     for (int count = 1; count <= n; count++) {
//         cout << count * count << endl;
//     }
// }

#include<iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the number :- " << endl;
    cin >> n;
    for (int i = 2; i <= n; i = i + 2) {
        cout << i << endl;
    }
}
