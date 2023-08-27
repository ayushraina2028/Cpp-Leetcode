#include <iostream>
#include <algorithm>
#include <climits>
#include <vector>
using namespace std;

void nextPermutation(vector<int>& nums) {
    int n = nums.size();
    int idx = -1;
    int jdx = -1;   
    // findind pivot index 
    for(int i = n-2;i >= 0;i--) {
        if (nums[i] < nums[i+1]) {
            idx = i;
            break;
        }
    }

    // Check if array is already sorted
    if (idx == -1) {
        reverse(nums.begin(), nums.end());
    }
    

    // reverse right part
    reverse(nums.begin() + idx + 1, nums.end());

    // finding just larger number in right half
    for(int i = idx+1;i < n;i++) {
        if (nums[idx] < nums[i]) {
            jdx = i;
            break;
        }
    }

    //swap with just greater
    int temp = nums[jdx];
    nums[idx] = nums[jdx];
    nums[jdx] = temp;

}

void display(vector <int> v) {
    for(int i = 0; i < v.size();i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main() {
    
    vector <int> v;
    
    v.push_back(1);
    v.push_back(2);
    v.push_back(6);
    v.push_back(5);
    v.push_back(4);
    v.push_back(1);
    
    


    display(v);

    nextPermutation(v);
    display(v);
    

    
}