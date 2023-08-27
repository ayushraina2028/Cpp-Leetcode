#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int binarySearch(vector <int> nums,int start,int end,int target) {
    int low = start;
    int high = end;
    int mid;

    while(low <= high) {
        mid = low + (high - low) / 2;

        if(nums[mid] == target) {
            return mid;
        }

        else if (nums[mid] < target) {
            low = mid+1;
        }

        else if(nums[mid] > target) {
            high = mid - 1;
        }
    }

    return -1;
}

int search(vector <int> nums, int target) {
    int low = 0;
    int high = nums.size()-1;
    int mid;
    int pivot = -1;
    int n = nums.size()-1;
    int idx = -1;

    if(n == 1) {
        if(nums[0] == target) return 0;
        else if(nums[1] == target) return 1;
        else return -1;
    }

    while(low <= high) {

        mid = low + (high - low)/2;

        if(mid == 0) {
            low = mid+1;
        }

        else if(mid == n) {
            high = mid-1;
        }

        else if(nums[mid] < nums[mid-1] && nums[mid] < nums[mid+1]) {
            pivot = mid;
            cout << pivot << "l1" << endl;
            break;
        }

        else if(nums[mid] > nums[mid-1] && nums[mid] > nums[mid+1]) {
            pivot = mid+1;
            cout << pivot << "l2" << endl;
            break;
        }

        // Now catch for Question (compare with last element)
        else if(nums[mid] > nums[high]) {
            // means mid ke pehle wale nahi hoge
            low = mid+1;
        }

        else if(nums[mid] < nums[high]) {
            high = mid-1;
        }

    }

    cout << pivot << endl;

    if(pivot == -1) {
        idx = binarySearch(nums,0,n,target);
    }

    else if(target >= nums[0] && target <= nums[pivot-1]) {
        idx = binarySearch(nums,0,pivot-1,target);
    }

    else {
        idx = binarySearch(nums,pivot,n-1,target);
    }
    
    return idx;
}


int main() {

    vector <int> arr = {1,2,3,4,5,6};
    int target = 4;

    cout << "Index of Given Target is: " << search(arr, target) << endl;



}
