#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int peakIndexInMountainArray3(vector<int> arr) {
    int low = 0;
    int high = arr.size()-1;
    int mid;

    while(low <= high) {
        mid = low + (high-low)/2;

        if(arr[mid]>arr[mid+1] && arr[mid] > arr[mid-1]) {
            return mid;
        }

        else if(arr[mid] > arr[mid+1]) {
            high = mid-1;
        }

        else {
            low = mid+1;
        }
    }
}

int peakIndexInMountainArray2(vector<int> arr) {
    int low = 0;
    int high = arr.size()-1;
    int mid;

    while(low <= high) {
        mid = low + (high-low)/2;

        if(arr[mid]>arr[mid+1] && arr[mid] > arr[mid-1]) {
            return mid;
        }

        else if(arr[mid] > arr[mid+1]) {
            high = mid;
        }

        else if(arr[mid] < arr[mid+1]) {
            low = mid+1;
        }

        else if(arr[mid] > arr[mid-1]) {
            low = mid;
        }

        else if(arr[mid] < arr[mid-1]) {
            high = mid-1;
        }
    }
}


int peakIndexInMountainArray1(vector<int> arr) {
    int n = arr.size()-1;
    int idx = -1;

    for(int i = 1;i < n-1;i++) {
        if (arr[i] > arr[i+1]) {
            idx = i;
            break;
        }
    }

    return idx;
}

int main() {

    vector <int> arr = {20,28,33,1,0};

    // O(n) solution
    cout << "Peak index is: " << peakIndexInMountainArray1(arr) << endl;

    // O(log(n)) solution
    cout << "Peak index is: " << peakIndexInMountainArray2(arr) << endl;

    // O(log(n)) solution
    cout << "Peak index is: " << peakIndexInMountainArray3(arr) << endl;


}
