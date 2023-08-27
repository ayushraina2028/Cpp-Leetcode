#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    // Push zeroes to end while maintaining the relative order of elements 

    // Here Bubble Sort is Important
    // Just apply technique that whenever u find 0 just swap with next one

    int arr[8] = {0,5,0,3,-2,1,0,-99};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << "Entered Array: " << endl;
    for(int i = 0; i < n;i++) {
        cout << arr[i] << " ";
    }
    cout << endl;


    // Sorting
    for(int i = 0; i < n-1;i++) {    // this loop is just to run inside element again
        // traversing
        for (int j = 0;j < n-1; j++) {
            if(arr[j] == 0) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    // Required array 
    cout << "Sorted Array: " << endl;
    for(int i = 0; i < n;i++) {
        cout << arr[i] << " ";
    }
    cout << endl;



    
}