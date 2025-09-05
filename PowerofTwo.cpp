// Program to check if a number is a power of two

#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (n > 0 && (n & (n - 1)) == 0) {
        cout << n << " is a power of two." << endl;
    } else {
        cout << n << " is not a power of two." << endl;
    }

    return 0;
}

/*

is question mai basically binary digit ki help se solve karenge..
User input:
n -> 8 -> 1000 (Binary)
n-1 -> 7 -> 0111 (Binary)
n & (n-1) -> 1000 & 0111 -> 0000 (Binary)
In AND{
    0 & 0 -> 0
    0 & 1 -> 0
    1 & 0 -> 0
    1 & 1 -> 1
}

*/