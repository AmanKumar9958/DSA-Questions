#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    int temp = n;
    int reversed = 0;

    while(temp>0){
        int last_digit = temp%10; // gives last digit
        reversed = reversed*10 + last_digit;    // adds last digit to reversed
        temp = temp/10; // removes last digit from temp
    }

    cout<<"Reversed number of "<<n<<": "<<reversed;

    if(n == reversed){
        cout<<"\n"<<n<<" is a palindrome number.";
    } else {
        cout<<"\n"<<n<<" is not a palindrome number.";
    }

    return 0;
}