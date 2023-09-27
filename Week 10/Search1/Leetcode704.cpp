#include <iostream>
#include <algorithm>
#include <climits>
#include <vector>

using namespace std;

int binarySearch(vector <int> nums, int target) {
    int low = 0;
    int high = nums.size()-1;
    int mid;

    while(low <= high) {
        if (nums[mid] == target) {
            return mid;
        }

        else if(nums[mid] < target) {
            low =  mid+1;
        }

        else {
            high = mid-1;
        }
    }

    return -1;
}

int main() {

    
    vector <int> v = {-1,0,3,5,9,12};
    for(int i=0; i<v.size(); i++) {
        cout << v[i] << " ";
    }

    cout << endl;

    int target = 9;

    cout << "Element is found at index: " << binarySearch(v,target) << endl;
}