// #include <iostream>
// using namespace std;
// int main() {
//     int score;
//     cout << "Enter your score (0-100): ";
//     cin >> score; 
//     if (score >= 90) {
//         cout << "Grade: A" << endl;
//     } 
//     else if (score >= 80) {
//         cout << "Grade: B" << endl;
//     } 
//     else if (score >= 70) {
//         cout << "Grade: C" << endl;
//     } 
//     else if (score >= 60) {
//         cout << "Grade: D" << endl;
//     } 
//     else {
//         cout << "Grade: F" << endl;
//     }
// }

// #include <iostream>
// using namespace std;
// int main() {
//     float temperature;
//     cout << "Enter temperature in Celsius: ";
//     cin >> temperature; 
//     if (temperature < 0) {
//         cout << "It's freezing!" << endl;
//     } 
//     else if (temperature >= 0) {
//         cout << "It's warm." << endl;
//     }
//     if (temperature > 25) {
//         cout << "It's hot!" << endl;
//     }
// }

// #include <iostream>
// using namespace std;
// int main() {
//     for (int i = 2; i <= 20; i += 2) {
//         cout << i << endl;
//     }
// }

// #include <iostream>
// using namespace std;
// int main() {
//     for (int i = 20; i >= 1; i--) {
//         cout << i << endl;
//     }
// }

#include <iostream>
using namespace std;
int main() {
    int num = 6;
    int factorial = 1;
    for (int i = 1; i <= num; i++) {
        factorial *= i;
    }
    cout << "Factorial of " << num << " is " << factorial << endl;
}
