// #include<iostream>
// using namespace std;
// int main() {
//     int age;
//     cout << "Enter your age :- " << endl;
//     cin >> age;
//     if (age > 18) {
//         cout << "You can vote." << endl;
//     }
//     else {
//         cout << "You can't vote." << endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int main() {
//     int a , b;
//     cout << "Enter the 1st number :- " << endl;
//     cin >> a;
//     cout << "Enter the 2nd number :- " << endl;
//     cin >> b;
//     if (a > b) {
//         cout << "The bigger number is :- " << a << endl;
//     }
//     else {
//         cout << "The bigger number is :- " << b << endl;
//     }
// }

// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cout << "Enter a number (1-12): " <<endl;
//     cin >> n;
//     if (n == 1) {
//         cout << "January" << endl;
//     } 
//     else if (n == 2) {
//         cout << "February" << endl;
//     } 
//     else if (n == 3) {
//         cout << "March" << endl;
//     } 
//     else if (n == 4) {
//         cout << "April" << endl;
//     } 
//     else if (n == 5) {
//         cout << "May" << endl;
//     } 
//     else if (n == 6) {
//         cout << "June" << endl;
//     } 
//     else if (n == 7) {
//         cout << "July" << endl;
//     } 
//     else if (n == 8) {
//         cout << "August" << endl;
//     } 
//     else if (n == 9) {
//         cout << "September" << endl;
//     } 
//     else if (n == 10) {
//         cout << "October" << endl;
//     } 
//     else if (n == 11) {
//         cout << "November" << endl;
//     } 
//     else if (n == 12) {
//         cout << "December" << endl;
//     } 
//     else {
//         cout << "Invalid input!" << endl;
//     }
// }

#include<iostream>
using namespace std;
int main() {
    int age;
    cout << "Enter your age: ";
    cin >> age;
    if (age < 12) {
        cout << "Yes" << endl;
    }
    else if (age > 65) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }
}
