// #include <iostream>
// #include <cstdio>
// using namespace std;
// int main() {
//     printf("Hello, World!");
//     return 0;
// }

// #include <cmath>
// #include <cstdio>
// #include <vector>
// #include <iostream>
// #include <algorithm>
// using namespace std;
// int main() {
//     int a, b, c;
//     cin >> a >> b >> c;
//     cout << a + b + c << endl;
//     return 0;
// }

// #include <iostream>
// #include <cstdio>
// using namespace std;
// int main() {
//      int i;
//     long l;
//     char c;
//     float f;
//     double d;
//     scanf("%d %ld %c %f %lf", &i, &l, &c, &f, &d);
//     printf("%d\n", i);           
//     printf("%ld\n", l);         
//     printf("%c\n", c);           
//     printf("%.3f\n", f);         
//     printf("%.9lf\n", d);   
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cin >> n;
//     if (n == 1) {
//         cout << "one" << endl;
//     } 
//     else if (n == 2) {
//         cout << "two" << endl;
//     } 
//     else if (n == 3) {
//         cout << "three" << endl;
//     } 
//     else if (n == 4) {
//         cout << "four" << endl;
//     } 
//     else if (n == 5) {
//         cout << "five" << endl;
//     } 
//     else if (n == 6) {
//         cout << "six" << endl;
//     } 
//     else if (n == 7) {
//         cout << "seven" << endl;
//     } 
//     else if (n == 8) {
//         cout << "eight" << endl;
//     } 
//     else if (n == 9) {
//         cout << "nine" << endl;
//     } 
//     else {
//         cout << "Greater than 9" << endl;
//     }
//     return 0;
// }

#include <iostream>
using namespace std;
int main() {
    int start, end;
    cin >> start >> end;
    for (int i = start; i <= end; i++) {
        if (i == 1) {
            cout << "one" << endl;
        } else if (i == 2) {
            cout << "two" << endl;
        } else if (i == 3) {
            cout << "three" << endl;
        } else if (i == 4) {
            cout << "four" << endl;
        } else if (i == 5) {
            cout << "five" << endl;
        } else if (i == 6) {
            cout << "six" << endl;
        } else if (i == 7) {
            cout << "seven" << endl;
        } else if (i == 8) {
            cout << "eight" << endl;
        } else if (i == 9) {
            cout << "nine" << endl;
        } else if (i > 9) {
            if (i % 2 == 0) {
                cout << "even" << endl; 
            } else {
                cout << "odd" << endl; 
            }
        }
    }
    return 0;
}
