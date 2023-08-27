#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int lastOccurence(vector<int>nums, int target) {
    int low = 0;
    int high = nums.size()-1;
    int mid;
    bool flag = false;

    while(low <= high) {
        mid = low + (high-low) / 2;

        if(nums[mid]==target) {
            if(nums[mid+1]==target) {
                low=mid+1;
            }
            else {
                flag = true;
                return mid;
            }
        }

        else if(nums[mid] < target) {
            low = mid + 1;
        }

        else {
            high = mid-1;
        }
    }

    if( flag == false ) {
        return -1;
    }
}

int main() {
    vector <int> nums = {1,2,3,3,4,4,4,5};
    int target = 4;

    // Print
    for(int i = 0;i < nums.size();i++) {
        cout << nums[i] << " ";
    }

    cout << endl;

    cout << "Last Occurence is: " << lastOccurence(nums, target) << endl;
}