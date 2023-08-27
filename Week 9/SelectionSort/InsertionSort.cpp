#include <iostream>
#include <algorithm>
#include <climits>

using namespace std;

int main() {

    // Insertion Sort Algorithm
    // Divide array into sorted and unsorted part
    // Pick element from unsorted part and insert it into sorted part at correct index
    

    int arr[5] = {5, 3, 1, 4, 2};
    int n = sizeof(arr)/sizeof(arr[0]);


    // for each loop to print elements of array(NEW)
    for(int ele : arr) {
        cout << ele << " ";
    }
    cout << endl;
    // this method works with vector also


    // Insertion Sort
    // we will start from second element as first 1 element is sorted
    for(int i = 1;i < n;i++) {
        int j = i;
        while(j > 0) {

            if(arr[j] > arr[j-1]) {
                break;
            }

            if (arr[j] < arr[j-1]) {
                swap(arr[j], arr[j-1]);
                j--;
            }
        }
    }




    // check
    for(int ele : arr) {
        cout << ele << " ";
    }
    cout << endl;

    cout << "Here is short code for same thing" << endl;
    for(int i = 0;i < n;i++) {
        int j = 1;
        while(j > 0 && arr[j] < arr[j-1]) {
            swap(arr[j], arr[j-1]);
            j--;
        }
    }

    // working properly
    for(int ele : arr) {
        cout << ele << " ";
    }
    cout << endl;


    // Time Complexity: Best case O(n) when array is already sorted
    // Worst case O(n^2) when array is sorted in reverse order
    // Space Complexity: O(1) as no extra space is used

    // Stability : Insertion sort is stable as it does not change the relative order of elements.

    
}