// #include<iostream>
// using namespace std;
// int main() {
//     int num;
//     cout << "Enter the binary number: ";
//     cin >> num;
//     int rem, ans = 0, mul = 1;

//     for (; num > 0; num /= 10) {
//         rem = num % 10;          
//         ans = rem * mul + ans;  
//         mul = mul * 2;           
//     }
//     cout << "Decimal equivalent: " << ans << endl;
// }

// #include<iostream>
// using namespace std;
// int main() {
//     int num;
//     cout << "Enter a decimal number: ";
//     cin >> num;
//     int binary = 0, place = 1;
//     for (; num > 0; num /= 2) {
//         int remainder = num % 2;  
//         binary += remainder * place;  
//         place *= 10;  
//     }
//     cout << "Binary equivalent: " << binary << endl;
// }

// #include<iostream>
// using namespace std;
// int main() {
//     int num;
//     cout << "Enter a decimal number: ";
//     cin >> num;
//     int octal = 0, place = 1;
//     while (num > 0) {
//         int remainder = num % 8;  
//         octal += remainder * place;  
//         place *= 10;                
//         num /= 8;                  
//     }
//     cout << "Octal equivalent: " << octal << endl;
// }

// #include<iostream>
// using namespace std;
// int main() {
//     int octal;
//     cout << "Enter an octal number: ";
//     cin >> octal;
//     int decimal = 0, place = 1;
//     while (octal > 0) {
//         int last_digit = octal % 10;  
//         decimal += last_digit * place; 
//         place *= 8;                   
//         octal /= 10;                   
//     }
//     cout << "Decimal equivalent: " << decimal << endl;
// }

// #include<iostream>
// using namespace std;
// int main() {
//     int binary;  
//     cout << "Enter a binary number: ";  
//     cin >> binary; 
//     int decimal = 0; 
//     int base = 1;    
//     while (binary > 0) {
//         int last_digit = binary % 10;  
//         decimal += last_digit * base;    
//         base *= 2;                     
//         binary /= 10;                 
//     }
//     int octal = 0;     
//     base = 1;          
//     int temp_decimal = decimal;  
//     while (temp_decimal > 0) {
//         int remainder = temp_decimal % 8;    
//         octal += remainder * base;            
//         base *= 10;               
//         temp_decimal /= 8;                     
//     }
//     cout << "Octal equivalent: " << octal << endl; 
// }

#include<iostream>
using namespace std;
int main() {
    int octal; 
    cout << "Enter an octal number: ";  
    cin >> octal;  
    int decimal = 0;  
    int place = 1;    
    while (octal > 0) {
        int last_digit = octal % 10;   
        decimal += last_digit * place;  
        place *= 8;                
        octal /= 10;                   
    }
    int binary = 0;  
    place = 1;       
    while (decimal > 0) {
        int remainder = decimal % 2;      
        binary += remainder * place;     
        place *= 10;                     
        decimal /= 2;                     
    }
    cout << "Binary equivalent: " << binary << endl;  
}
