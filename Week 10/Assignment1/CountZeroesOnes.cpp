#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int countOnes(vector <int> nums) {
    int low = 0;
    int high = nums.size()-1;
    int mid;

    // we will find first occurence of 1
    int target = 1;
    int temp = high;
    int l_idx = -1;
    bool flag = false;

    while(low <= high) {
        mid = low + (high-low) / 2;

        if(nums[mid]==target) {
            if(nums[mid-1]==target) {
                high = mid-1;
            }
            else {
                flag = true;
                l_idx=mid;
                break;
            }
        }

        else if(nums[mid] < target) {
            low = mid+1;
        }
    }

    if(flag == false) {
        return 0;
    }
    return (int)(temp-l_idx+1);
}


int main() {
    vector <int> nums = {0,0,0,0};
    
    // Print
    for(int i = 0;i < nums.size();i++) {
        cout << nums[i] << " ";
    }

    // Count no of ones in vector
    cout << "No of Ones in array is: " << countOnes(nums) << endl;
}