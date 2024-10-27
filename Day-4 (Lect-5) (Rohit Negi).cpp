// #include<iostream>
// using namespace std;
// int main() {
//     for (int i = 100; i <= 200; i++) {
//         cout << i << endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int main() {
//     for (char name ='a'; name <= 'z'; name = name + 1) {
//         cout << name << endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int main() {
//     for (int i = 10; i >= 1; i = i - 1) {
//         cout << i << endl;
//     } 
// }

// #include<iostream>
// using namespace std;
// int main() {
//     for (int i = 1; i <= 100; i = i + 3) {
//         cout << i << " ";
//     }
// }

// #include<iostream>
// using namespace std;
// int main() {
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;
//     for (int i = 0; i <= 10; i = i + 1) {
//         cout << n << " * " << i << " = " << n * i << endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int main() {
//     int n, i, num, pow;
//     cout << "Enter a number: ";
//     cin >> n;
//     cout << "Enter a power: ";
//     cin >> pow;
//     num = n;
//     for (i = 1; i < pow; i = i + 1) {
//         num = num * n;
//     }
//     cout << num;
// }

// #include<iostream>
// using namespace std;
// int main() {
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;
//     int sum = 0;
//     for (int i = 1; i <= n; i = i +1) {
//         sum = sum + i;
//         cout << sum << endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int main() {
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;
//     int fact = 1;
//     for (int i = 1; i <= n; i = i + 1) {
//         fact = fact * i;
//         cout << fact << endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int main() {
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;
//     if (n < 2) {
//         cout << "Not Prime number" << endl;
//         return 0;
//     }
//     else {
//         for (int i = 2; i < n; i = i + 1) {
//             if (n % i == 0) {
//                 cout << "Not Prime number" << endl;
//                 return 0;
//             }
//             else {
//                 cout << "Prime number" << endl;
//                 return 0;
//             }
//         }
//     }
// }

#include <iostream>  
using namespace std;  
int main() {  
    int n1 = 0, n2 = 1, n3, i, number;    
    cout << "Enter the number of elements: ";    
    cin >> number;    
    cout << n1 << " " << n2 << " ";    
    for (i=2;i<number;++i) {
        n3 = n1 + n2;    
        cout << n3 << " ";    
        n1 = n2;    
        n2 = n3;    
    }    
    return 0;  
}  
