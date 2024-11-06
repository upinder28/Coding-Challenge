// #include <iostream>
// using namespace std;
// int cube(int number) {
//     return number * number * number;
// }
// int main() {
//     int num;
//     cout << "Enter a number to find its cube: ";
//     cin >> num;
//     int result = cube(num);
//     cout << "The cube of " << num << " is: " << result << endl;
// }

// #include <iostream>
// using namespace std;
// int reverseNumber(int number) {
//     int reversed = 0;
//     while (number != 0) {
//         int digit = number % 10;
//         reversed = reversed * 10 + digit;
//         number /= 10;
//     }
//     return reversed;
// }
// int main() {
//     int n;
//     cout << "Enter a number between -5000 and 5000: ";
//     cin >> n;
//     if (n < -5000 || n > 5000) {
//         cout << "Number is out of range!" << endl;
//         return 1;
//     }
//     int reversed = reverseNumber(n);
//     cout << "The reversed number is: " << reversed << endl;
// }

// #include <iostream>
// using namespace std;
// void rotateValues(int &a, int &b, int &c) {
//     int temp = a;
//     a = c;
//     c = b;
//     b = temp;
// }
// int main() {
//     int a, b, c;
//     cout << "Enter values for a, b, and c: ";
//     cin >> a >> b >> c;
//     cout << "\nBefore rotation:" << endl;
//     cout << "a = " << a << ", b = " << b << ", c = " << c << endl;
//     rotateValues(a, b, c);
//     cout << "\nAfter rotation:" << endl;
//     cout << "a = " << a << ", b = " << b << ", c = " << c << endl;
// }

// #include <iostream>
// using namespace std;
// void swapWithoutTemp(int &a, int &b) {
//     a = a + b;
//     b = a - b;
//     a = a - b;
// }
// int main() {
//     int a, b;
//     cout << "Enter values for a and b: ";
//     cin >> a >> b;
//     cout << "\nBefore swapping:" << endl;
//     cout << "a = " << a << ", b = " << b << endl;
//     swapWithoutTemp(a, b);
//     cout << "\nAfter swapping:" << endl;
//     cout << "a = " << a << ", b = " << b << endl;
// }

// #include <iostream>
// using namespace std;
// void printMessage(int n) {
//     for (int i = 0; i < n; i++) {
//         cout << "Hello Coder Army" << endl;
//     }
// }
// int main() {
//     int n;
//     cout << "Enter the number of times to print 'Hello Coder Army': ";
//     cin >> n;
//     printMessage(n);
// }

#include <iostream>
using namespace std;
int factorial(int num) {
    int fact = 1;
    for (int i = 1; i <= num; i++) {
        fact *= i;
    }
    return fact;
}
int nCr(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}
int main() {
    int n, r;
    cout << "Enter values for n and r: ";
    cin >> n >> r;
    if (r > n || r < 0 || n < 0) {
        cout << "Invalid input! n should be >= r and both should be non-negative." << endl;
    } else {
        int result = nCr(n, r);
        cout << "The value of " << n << "C" << r << " is: " << result << endl;
    }
}
