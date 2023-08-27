#include <iostream>
#include <algorithm>
#include <climits>
#include <vector>

using namespace std;

int search(vector <int> nums, int target) {
    int low = 0;
    int high = nums.size()-1;
    int mid;

    while(low <= high) {
        
        // mid = (low+high)/2; this is one technique

        mid = low + (high-low)/2;  // this we are using if addition goes out of bound

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
}

int main() {

    
    vector <int> v = {-1,0,3,5,9,12};
    for(int i=0; i<v.size(); i++) {
        cout << v[i] << " ";
    }

    cout << endl;

    int target = 9;

    cout << "Element is found at index: " << search(v,target) << endl;
}