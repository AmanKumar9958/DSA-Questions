// https://leetcode.com/problems/add-digits/description/

// Given an integer num, repeatedly add all its digits until the result has only one digit, and return it.
// Example 1:
// Input: num = 38
// Output: 2
// Explanation: The process is
// 38 --> 3 + 8 --> 11
// 11 --> 1 + 1 --> 2 
// Since 2 has only one digit, return it.

#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;

    while(n >= 10){
        int sum = 0;
        while(n > 0){
            sum += n % 10;
            n /= 10;
        }
        n = sum;
    }

    cout << "The result is: " << n << endl;
    return 0;
}

/*

Approach:
ismai hamne 2 loop use kiya hai, ek outer loop hai jo check karta hai ki number 10 se bada hai ya nahi (single digit hone tak), 
aur ek inner loop hai jo number ke digits ko add karta hai.
n % 10 se last digit nikalta hai
n /= 10 se last digit ko hata deta hai.

*/