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

int maxProduct(vector <int> &nums) {
        int max_s = nums[0];
        int min_s = nums[0];
        int result = nums[0];

        for(int i = 1;i < nums.size();i++) {
            int temp_max = max(nums[i], max(max_s*nums[i], min_s*nums[i]));
            min_s = min(nums[i],min(max_s*nums[i], min_s*nums[i]));

            result = max(result, temp_max);
            max_s = temp_max;
        }


        return result;
}

int maxProduct0(vector<int> &nums) {
        int result = nums[0];

        for(int i = 0;i < nums.size();i++) {
            int num = 1;
            for(int j = i;j < nums.size();j++) {
                num *= nums[j];
                if(result < num) {
                    result = num;
                }

            }
        }
        return result;
}

int main() {
    
    vector <int> v;
    
    v.push_back(-2);
    v.push_back(3);
    v.push_back(-4);
    

    display(v);

    // Brute Force Approach O(N^2)
    // This is correct but leetcode will not accept this one
    cout << maxProduct0(v) << endl;

    // Efficient Method
    cout << maxProduct(v) << endl;



}