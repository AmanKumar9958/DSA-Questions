// Initially, there is a heap of stones on the table.
// You and your friend will alternate taking turns, and you go first.
// On each turn, the person whose turn it is will remove 1 to 3 stones from the heap.
// The one who removes the last stone is the winner.

// Example:
// Input: n = 4     (number of stones have)
// Output: false
// Explanation: These are the possible outcomes:
// 1. You remove 1 stone. Your friend removes 3 stones, including the last stone. Your friend wins.
// 2. You remove 2 stones. Your friend removes 2 stones, including the last stone. Your friend wins.
// 3. You remove 3 stones. Your friend removes the last stone. Your friend wins.
// In all outcomes, your friend wins.


// Return "TRUE" if you win and "FALSE" if you lose.

#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter number of stones: ";
    cin >> n;

    // See, I will lose only when there are 4 stones in the beginning of my turn (If I start *FIRST*)
    // So, according to this all the the numbers which are multiples of 4 will make me lose.
    // Therefore, if number of stones is not divisible by 4 then I will win

    if(n % 4 != 0){
        cout << "You win!" << endl;
    } else {
        cout << "You lose!" << endl;
    }


    return 0;
}