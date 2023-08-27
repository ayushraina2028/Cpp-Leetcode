#include <iostream>
#include <algorithm>
#include <climits>

using namespace std;

int main() {
    // Selection Sort Algorithm 
    // Select minimum element and put in on first place
    // here are n-1 total swaps for n element array 
    // hence it is better than bubble sort in case of swaps


    int arr[5] = {5, 3, 1, 4, 2};
    int n = sizeof(arr)/sizeof(arr[0]);


    // for each loop to print elements of array(NEW)
    for(int ele : arr) {
        cout << ele << " ";
    }
    cout << endl;
    // this method works with vector also

    // Selection Sort
    for(int i = 0;i < n-1;i++) {
        int min = INT_MAX;
        int mindx = -1;
        for(int j = i;j < n;j++) {
            // now find min ele and index
            if(arr[j] < min) {
                min = arr[j];
                mindx = j;
            }

            swap(arr[i], arr[mindx]);
        }
    }

    // check
    for(int ele : arr) {
        cout << ele << " ";
    }
    cout << endl;

    // there are no optimisations for this algorithm
    // Time complexity is O(n^2)
    // This is not a stable algorithm
    // space complexity is O(1)
    


    // used when cost of swap is high
    // when we need k min elements from array


}