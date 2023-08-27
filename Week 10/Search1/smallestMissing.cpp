#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int smallestMissingMethod2(vector <int> &nums) {
    // O(log(n))

    int low = 0;
    int high = nums.size()-1;
    int mid; 
    int answer=-1;

    while(low <= high) {

        mid = low + (high-low)/2;

        if(nums[mid] == mid) {
            low = mid + 1;
        }

        else {
            answer = mid;
            high = mid-1;
        }
    }

    return answer;
}

int smallestMissingMethod1(vector <int> &nums) {
    // O(n)

    for(int i = 0;i < nums.size();i++) {
        if(i != nums[i]) {
            return i;
        }
    }
}



int main() {
    // Find the smallest missing positive integer in a sorted arrat of non negative distinct integers

    vector <int> nums = {0,1,2,3,4,5,7,9};

    cout << "Smallest Missing Integer is: " << smallestMissingMethod1(nums) << endl;
    cout << "Smallest Missing Integer is: " << smallestMissingMethod2(nums);


}