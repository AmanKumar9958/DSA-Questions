#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    int count=0;
    while(n>=5){
        count+=n/5;
        n=n/5;
    }

    cout<<"Number of trailing zeros in factorial: "<<count<<endl;

    return 0;
}