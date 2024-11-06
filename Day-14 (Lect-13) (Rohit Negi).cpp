// (258 -> Add Digit) LeetCode Question :-

// class Solution {
// public:
//     int addDigits(int num) {
//         while (num > 9) {
//             int rem, ans = 0;
//             while (num != 0) {
//                 rem = num % 10;
//                 num/=10;
//                 ans = ans+rem;
//             }
//             num = ans;
//         }  
//         return num;
//     }
// };

// (Leap Year) Geeks for Geeks question :-

// #include<iostream>
// using namespace std;
// int main() {
//     int year;
//     cout<<"Enter the year: ";
//     cin>>year;
//     if (year % 400 == 0) {
//         cout << year << " is a leap year";
//     }
//     else if (year % 4 == 0 && year % 100 != 0) {
//         cout << year << " is a leap year";
//     }
//     else {
//         cout << year << " is not a leap year";
//     }
// }

// (7 -> Reverse Integer) LeetCode Question :-

// class Solution {
// public:
//     int reverse(int x) {
//         int rem , ans = 0;
//         while (x!=0) {
//             rem = x % 10;
//             x/=10;
//             if (ans > INT_MAX / 10 || ans < INT_MIN / 10) {
//                 return 0;
//             }
//             ans = ans * 10 + rem;
//         }
//         return ans;
//     }
// };

// (231 -> Power of two) LeetCode Question :-

// class Solution {
// public:
//     bool isPowerOfTwo(int n) {
//         if (n<1) {
//             return 0;
//         }
//         while (n!=1) {
//             if (n%2==1){
//                 return 0;
//             }
//             n=n/2;
//         }
//         return 1;
//     }
// };

// (69 -> Sqrt(x)) LeetCode Question :-

// class Solution {
// public:
//     int mySqrt(int x) {
//         if (x < 2) return x;  // If x is 0 or 1, the square root is x itself

//         int left = 1, right = x / 2, result = 0;

//         while (left <= right) {
//             int mid = left + (right - left) / 2;
            
//             // To prevent overflow, we use division instead of multiplication
//             if (mid <= x / mid) {
//                 result = mid;  // This could be the answer
//                 left = mid + 1;  // Move right to check larger values
//             } else {
//                 right = mid - 1;  // Move left to check smaller values
//             }
//         }

//         return result;
//     }
// };

// (9 -> Palindrome Number) LeetCode Question :-

// class Solution {
//  public:
//   bool isPalindrome(int x) {
//     if (x < 0) {
//         return false;
//     }
//     int original = x;
//     int reversed = 0;
//     while (x > 0) {
//       int lastDigit = x % 10;
//       if (reversed > (INT_MAX - lastDigit) / 10) {
//         return false;  
//       }
//       reversed = reversed * 10 + lastDigit;
//       x /= 10;
//     }
//     return reversed == original;
//   }
// };

// (1009 -> Complement of base 10) LeetCode Question :-

// class Solution {
// public:
//     int bitwiseComplement(int n) {
//         if (n==0) {
//             return 1;
//         }
//         int ans=0, mul=1,rem;
//         while(n) {
//             rem=n%2;
//             rem=rem^1;
//             n/=2;
//             ans=ans+rem*mul;
//             mul*=2;
//         }
//         return ans;
//     }
// };

// (263 -> Ugly Number) LeetCode Question :-

// class Solution {
//  public:
//   bool isUgly(int n) {
//     if (n == 0) 
//       return false;
//     for (int prime : {2, 3, 5}) {
//       while (n % prime == 0) {
//         n /= prime;
//       }
//     }
//     return n == 1;
//   }
// };

// (Squares in N*N Chessboard) Geeks for Geeks question :-

class Solution {
  public:
    long long squaresInChessBoard(long long N) {
        return (N * (N + 1) * (2 * N + 1)) / 6;
    }
};
