// #include<iostream>
// using namespace std;
// int main() {
//     float temp;
//     cout << "Enter temperature in Fahrenheit: ";
//     cin >> temp;
//     if (temp > 70 && temp < 90) {
//         cout << "Temperature is normal." << endl;
//     }
//     else {
//         cout << "Temperature is not normal." << endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int main() {
//     int num;
//     cout << "Enter a number: ";
//     cin >> num;
//     if (num > 0 && num % 2 == 0) {
//         cout << "Number is positive and even." << endl;
//     }
//     else {
//         cout << "No";
//     }
// }

// #include<iostream>
// using namespace std;
// int main() {
//     int age;
//     cout << "Enter your age: ";
//     cin >> age;
//     if (age >= 13 && age <= 19) {
//         cout << "Teenager";
//     }
//     else {
//         cout << "Not a teenager";
//     }
// }

#include<iostream>
using namespace std;
int main() {
    int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;
    if (a > b || a > c) {
        cout << "Yes";
    }
    else {
        cout << "No";
    }
}
