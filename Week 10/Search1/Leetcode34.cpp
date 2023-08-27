#include <iostream>
#include <algorithm>
#include <climits>
#include <vector>

using namespace std;

vector<int> searchRange(vector<int>& nums, int target) {
        
        vector <int> answer(2,-1);

        int low = 0;
        int high = nums.size()-1;
        int mid;

        // Case for Size 1 array
        if(nums.size() == 1) {
            
            if (nums[0] == target) {
                answer[0] = 0;
                answer[1] = 0;
                return answer;
            }

            else {
                return answer;
            }

        }

        // first occurence
        while(low <= high) {

            mid = low + (high-low)/2;

            if (nums[mid] == target) {

                // corner cases for index out of range
                if((mid-1)==-1 || nums[mid-1] != target) {
                    answer[0] = mid;
                    break;
                }

                else {
                    high = mid - 1;
                }
            }

            else if(nums[mid] < target) {
                low = mid + 1;
            }

            else {
                high = mid - 1;
            }
        }

        // finding last occurence

        low = 0;
        high = nums.size()-1;


        while(low <= high) {
            mid = low + (high-low)/2;

            if(nums[mid] == target) {

                // corner cases for index out of range
                if ((mid+1) == nums.size() || nums[mid+1] != target) {
                    answer[1] = mid;
                    break;
                }

                else {
                    low = mid + 1;
                }
            }

            else if (nums[mid] < target) {
                low = mid + 1;
            }

            else {
                high = mid - 1;
            }

        }

        return answer;
    }


int main() {

    
    vector <int> v = {2,2};

    for(int i=0; i<v.size(); i++) {
        cout << v[i] << " ";
    }

    cout << endl;

    int target = 2;

    vector <int> answer = searchRange(v,target);

    cout << "First and Last index of target is: " << endl;
    for(int i = 0;i < answer.size();i++) {
        cout << answer[i] << " ";
    }

    cout << endl;
}