#include <iostream>
#include <algorithm>
#include <climits>
#include <vector>

using namespace std;

int findupperbound(vector <int> nums, int target) {
    int low = 0;
    int high = nums.size()-1;
    int mid;

    bool flag = false;

    while(low <= high) {

        mid = low + (high-low)/2;

        
        if(nums[mid]==target) {
            flag = true;
            cout << "Flag is true" << endl;
            return nums[mid+1];
        }

        else if(nums[mid] < target) {
            low = mid+1;
        }

        else {
            high = mid-1;
        }
    }

   

    // If element was not in array
    if(flag == false) {
        return nums[low];
    }
    
}

int findlowerbound(vector<int> nums, int target) {
    int low = 0;
    int high = nums.size()-1;
    int mid;

    bool flag = false;

    while(low <= high) {

        mid = low + (high-low)/2;
        
        if(nums[mid]==target) {
            flag = true;
            cout << "Flag is true" << endl;
            return nums[mid-1];
        }

        else if(nums[mid] < target) {
            low = mid+1;
        }

        else {
            high = mid-1;
        }
    }

   

    // If element was not in array
    if(flag == false) {
        return nums[high];
    }
    

}

int main() {

    
    vector <int> v = {1,2,4,5,9,15,18,21,24};
    for(int i=0; i<v.size(); i++) {
        cout << v[i] << " ";
    }

    cout << endl;

    int target = 17;

    // Flag will be true when element is in given array
    cout << "Lower Bound of Target is : " << findlowerbound(v,target) << endl;
    cout << "Upper Bound of Target is : " << findupperbound(v,target) << endl;
}