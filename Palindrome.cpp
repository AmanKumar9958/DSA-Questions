#include<iostream>
using namespace std;
int main(){
    // int originalNum = 121;
    int originalNum = 123;
    int reversedNum = 0;
    int lastDigit;
    int temp = originalNum;

    while(temp != 0){
        lastDigit =  temp%10;
        reversedNum = reversedNum*10 + lastDigit;
        temp = temp/10;
    }

    if(originalNum == reversedNum){
        cout << originalNum << " is a palindrome." << endl;
    } else {
        cout << originalNum << " is not a palindrome." << endl;
    }

    return 0;
}