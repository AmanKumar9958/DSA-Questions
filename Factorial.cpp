// Find factorial of a number given by user

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    int temp = n;

    int factorial = 1;

    while(temp>=1){
        factorial *= temp;
        temp--;
    }

    cout<<"Factorial of "<<n<<": "<<factorial;

    return 0;
}