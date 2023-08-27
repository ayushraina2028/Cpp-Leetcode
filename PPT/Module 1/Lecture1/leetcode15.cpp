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


vector <vector <int>> threeSum0(vector <int> &nums) {
    vector <int> threesum;
    vector <vector <int>> answer;
    for(int i = 0;i < nums.size();i++) {
        for(int j = 0;j< nums.size();j++) {
            for(int k = 0;k < nums.size();k++) {
                if(nums[i] + nums[j] + nums[k] == 0) {
                    threesum.push_back(nums[i]);
                    threesum.push_back(nums[j]);
                    threesum.push_back(nums[k]);
                    answer.push_back(threesum);
                }
            }
        }
    }

    display(threesum);
}



int main() {
    
    vector <int> v = {-1,0,1,2,-1,-4};
    
    


    // display the entered vector
    display(v);

    // Bruteforce approach
    threeSum0(v);

}