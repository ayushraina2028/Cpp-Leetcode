#include <iostream>
#include <algorithm>
#include <climits>
#include <vector>
using namespace std;

void display(vector <int> v) {
    for(int i = 0; i < v.size();i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

int minmax2(vector<int> &nums){
    int min = nums[0];
    int max = nums[0];
    int n = nums.size();

    for(int i = 1;i < n-1;i += 2) {
        if(nums[i] > nums[i+1]) {
            if(max < nums[i]) max = nums[i];
            if(min > nums[i+1]) min = nums[i+1];
        }


        if(nums[i] < nums[i+1]) {
            if(max < nums[i+1]) max = nums[i+1];
            if(min > nums[i]) min = nums[i];
        }

    }

    cout << max << " " << min << endl;
}

int minmax(vector <int>&nums) {
    int max = INT_MIN;
    int min = INT_MAX;

    for(int i = 0;i < nums.size();i++) {
        if(max < nums[i]) {
            max = nums[i];
        }

        if(min > nums[i]) {
            min = nums[i];
        }
    }

    // print max and then min
    cout << max << " " << min << endl;
}

int main() {
    
    vector <int> v;
    
    v.push_back(3);
    v.push_back(5);
    v.push_back(0);
    v.push_back(1);
    v.push_back(9);
    v.push_back(2);
    

    display(v);

    
    // Find minimum and maximum element without Sorting
    // Sorting uses nlogn but through linear search we can get in O(n)
    minmax(v);

    // if length of array is odd then we caan optimise more to O(N/2)
    minmax2(v);
}