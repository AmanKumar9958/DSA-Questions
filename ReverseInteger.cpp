#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter an integer: ";
    cin >> n;

    int reversedNumber = 0;
    int temp = n;

    while(temp != 0){
        int lastDigit = temp % 10;
        reversedNumber = reversedNumber * 10 + lastDigit;
        temp /= 10;
    }

    // % 10 gives the last digit
    // / 10 removes the last digit
    //  * 10 shifts the digits left

    cout << "Original: " << n << endl;
    cout << "Reversed: " << reversedNumber << endl;

    return 0;
}