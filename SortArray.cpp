// Input: [5, 2, 8, 1, 3]
// Output: [1, 2, 3, 5, 8]
// Using Selection Sort Algorithm


#include<iostream>
using namespace std;
int main(){

    // Taking input
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;

    // Declare array of size user input
    int arr[n];
    cout<<"Enter the elements of array: ";

    // Taking input for array
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    // Printing original array
    cout<<"Original array: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    // Sorting array using Selection Sort
    for(int i=0; i<n; i++){
        int index_of_min = i;
        for(int j=i+1; j<n; j++){
            if(arr[j] < arr[index_of_min]){
                index_of_min = j;
            }
        }
        // Swapping the found minimum element with the first element
        swap(arr[i], arr[index_of_min]);
    }

    // Printing sorted array
    cout<<"Sorted array: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    return 0;
}

// Approach:
// 1. i<n loop to iterate through the array
// 2. index_of_min to store the index of the first element
// 3. j=i+1 because we want to compare from the next element
// 4. If arr[j] < arr[index_of_min], current element is smaller than the minimum element found so far
// 5. index_of_min = j to update the index of the minimum element
// 6. swap(arr[i], arr[index_of_min]) to swap the found minimum element with the first element