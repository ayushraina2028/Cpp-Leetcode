#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int arr[8] = {0,5,4,3,-2,1,99,-99};
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
            if(arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    // Sorted Array
    cout << "Sorted Array: " << endl;
    for(int i = 0; i < n;i++) {
        cout << arr[i] << " ";
    }
    cout << endl;



    // Optimised Bubble Sort
    // Hence A little bit Efficient
    // just change n-1 to n-1-i in internal loop 
    for(int i = 0; i < n-1;i++) {    // this loop is just to run inside element again
        // traversing
        for (int j = 0;j < n-1-i; j++) {
            if(arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    // Sorted Array
    cout << "Optimisation 1: " << endl;
    for(int i = 0; i < n;i++) {
        cout << arr[i] << " ";
    }
    cout << endl;


    // Optimisation 2 : Can we optimise further ?
    // if after some pass if there is no swapping then break


    for(int i = 0; i < n-1;i++) {  

        bool flag = true;  
        for (int j = 0;j < n-1-i; j++) {
            if(arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
        if(flag == true) { // break bcox no swap
            break;
        }
    }

    // Sorted Array
    cout << "Optimisation 2: " << endl;
    for(int i = 0; i < n;i++) {
        cout << arr[i] << " ";
    }
    cout << endl;


    // Time Complexity : Best Case O(n), Average and Worst Case O(n^2)
    // Bubble Sort is Stable Sort
    // In worst case maximum number of swaps = total no of iteration considering worst case is n(n-1)/2
}