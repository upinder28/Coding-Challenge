// #include<iostream>
// using namespace std;
// bool Prime (int n) {
//     if (n < 2) {
//         return 0;
//     }
//     for (int i = 2; i < 2; i++) {
//         if (n % i == 0) {
//             return 0;
//         }
//     }
//     return 1;
// }
// int Fact (int n) {
//     int ans = 1;
//     for (int i = 1; i <= n; i++) {
//         ans *= i;
//     }
//     return ans;
// }
// int main() {
//     int a, b;
//     cout << "Enter the the numbers: ";
//     cin >> a >> b;
//     cout << Prime (a) << endl;
//     cout << Fact (a) << endl;
//     cout << Prime (b) << endl;
//     cout << Fact (b) << endl;
//     cout << Prime (b-a) << endl;
//     cout << Fact (b-a) << endl;
// }

// #include<iostream>
// using namespace std;
// int sum  (int a, int b) {
//     int ans = a + b;
//     return ans;
// }
// int main() {
//     int m , n;
//     cout << "Enter the numbers: ";
//     cin >> m >> n;
//     cout << sum (m, n) << endl;
// }

#include<iostream>
using namespace std;
void swap (int &a, int &b) {
    int c;
    c = a;
    a = b;
    b = c;
}
int main() {
    int a,b;
    cin >> a >> b;
    swap (a,b);
    cout << a << " "<< b << " ";
}
