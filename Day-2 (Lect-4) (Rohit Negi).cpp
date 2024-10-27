// #include<iostream>
// using namespace std;
// int main() {
//     int a , b;
//     cout << "Enter 1st number :- " << endl;
//     cin >> a;
//     cout << "Enter 2nd number :- " << endl;
//     cin >> b;
//     cout <<"Sum is :- " << a + b;
// }

// #include<iostream>
// using namespace std;
// int main() {
//     int a = 10;
//     char c = 'b';
//     a = c;
//     cout << a;
// }

// #include<iostream>
// using namespace std;
// int main() {
//     int a = 66;
//     char c = 'b';
//     c = a;
//     cout << c;
// }

// #include<iostream>
// using namespace std;
// int main () {
//     int package;
//     cout << "Enter the package number :- " << endl;
//     cin >> package;
//     if (package > 10) {
//         cout << "Accepted";
//     }
//     else {
//         cout << "Rejected";
//     }
// }

// #include<iostream>
// using namespace std;
// int main () {
//     int marks;
//     cout << "Enter your marks :- " << endl;
//     cin >> marks;
//     if (marks > 33) {
//         cout << "Pass";
//     }
//     else {
//         cout << "Fail";
//     }
// }

// #include<iostream>
// using namespace std;
// int main () {
//     int a , b;
//     cout << "Enter the 1st number :- " << endl;
//     cin >> a;
//     cout << "Enter the 2nd number :- " << endl;
//     cin >> b;
//     if (a > b) {
//         cout << "Yes 'a' is greater";
//     }
//     else {
//         cout << "No";
//     }
// }

// #include<iostream>
// using namespace std;
// int main() {
//     int num;
//     cout << "Enter the number :- " << endl;
//     cin >> num;
//     if (num % 2 == 0) {
//         cout << "Even number";
//     }
//     else {
//         cout << "Odd number";
//     }
// }

// #include<iostream>
// using namespace std;
// int main() {
//     int num;
//     cout << "Enter the number :- " << endl;
//     cin >> num;
//     if (num > 0) {
//         cout << "Positive number";
//     }
//     else if (num < 0) {
//         cout << "Negative number";
//     }
//     else {
//         cout << "Zero";
//     }
// }

// #include<iostream>
// using namespace std;
// int main() {
//     char c;
//     cout << "Enter the character :- " << endl;
//     cin >> c;
//     if (c == 'a') {
//         cout << "'a' is Vowel";
//     }
//     else if (c == 'e') {
//         cout << "'e' is Vowel";
//     }
//     else if (c == 'i') {
//         cout << "'i' is Vowel";
//     }
//     else if (c == 'o') {
//         cout << "'o' is Vowel";
//     }
//     else if (c == 'u') {
//         cout << "'u' is Vowel";
//     }
//     else {
//         cout << "Consonent";
//     }
// }

#include<iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the number :- " << endl;
    cin >> n;
    if (n == 1) {
        cout << "Monday";
    }
    else if (n == 2) {
        cout << "Tuesday";
    }
    else if (n == 3) {
        cout << "Wednesday";
    }
    else if (n == 4) {
        cout << "Thursday";
    }
    else if (n == 5) {
        cout << "Friday";
    }
    else if (n == 6) {
        cout << "Saturday";
    }
    else if (n == 7) {
        cout << "Sunday";
    }
    else {
        cout << "Invalid Day";
    }
}
