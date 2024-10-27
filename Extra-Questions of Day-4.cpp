// #include<iostream>
// using namespace std;
// int main() {
//     for (int i = 280; i >= 250; i = i - 1) {
//         cout << i << endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int main() {
//     for (char name = 'A'; name <= 'Z'; name = name + 1) {
//         cout << name << endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int main() {
//     for (char name = 'Z'; name >= 'A'; name = name - 1) {
//         cout << name << endl;
//     }
// }

// #include <iostream>
// using namespace std;
// int main() {
//     int first_term = 220;
//     int common_difference = 7;
//     int last_term = 730;
//     for (int term = first_term; term <= last_term; term += common_difference) {
//         cout << term << " ";
//     }
// }

// #include <iostream>
// using namespace std;
// int main() {
//     int n, sum = 0;
//     cout << "Enter a number: ";
//     cin >> n;
//     for (int i = 1; i <= n; i++) {
//         sum += i * i; 
//     }
//     cout << "Sum of squares of first " << n << " natural numbers is: " << sum << endl;
// }

// #include <iostream>
// using namespace std;
// int main() {
//     int n, sum = 0;
//     cout << "Enter a number: ";
//     cin >> n;
//     for (int i = 1; i <= n; i++) {
//         sum += i * i * i;
//     }
//     cout << "Sum of cubes of first " << n << " natural numbers is: " << sum << endl;
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
