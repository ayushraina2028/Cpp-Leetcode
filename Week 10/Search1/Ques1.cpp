#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int firstOccurence(vector <int> nums, int target) {
    
    // Display
    for (int i = 0;i < nums.size();i++) {
        cout << nums[i] << " ";
    }

    cout << endl;

    int low = 0;
    int high = nums.size() - 1;
    int mid;
    bool flag = false;

    while(low <= high) {

        mid = low + (high-low)/2;

        if (nums[mid] == target) {

            if (nums[mid-1] == target) {
                high = mid - 1;
            }
            else {
                flag = true;
                return mid;
            }

        }

        // remaining 2 conditions are same
        else if (nums[mid] < target) {
            low = mid + 1;
        }

        else if (nums[mid] > target) {
            high = mid - 1;
        }
    }

    if (flag == false) {
        return -1;
    }
    
}


int main() {
    // Find first occurence of a target element x in a sorted array
    // If element is not found return -1

    vector <int> nums = {1,2,2,3,3,3,3,3,4,4,5,5,9};
    int target = 5;

    cout << "First occurence of a target element is: " << firstOccurence(nums,target);
}