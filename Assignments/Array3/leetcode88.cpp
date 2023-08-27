#include <iostream>
#include <algorithm>
#include <climits>
#include <vector>
using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // we will try to fill it in reverse order 
        int k = m + n - 1;
        int i = m -1;
        int j = n - 1;
        while(i >= 0 && j >= 0) {
            if (nums1[i] >= nums2[j]) {
                nums1[k] = nums1[i];
                i--;
                k--;
                if(i < 0) {
                    while(j >= 0) {
                        nums1[k] = nums2[j];
                        j--;
                        k--;
                    }
                    
                }
            }
            else {
                nums1[k] = nums2[j];
                j--;
                k--;
                if(j < 0) {
                    while(i >= 0) {
                        nums1[k] = nums1[i];
                        k--;
                        i--;
                    }
                    
                }
            }
        }

        if(m == 0) {
            nums1 = nums2;
        }
    }

void display(vector <int> v) {
    for(int i = 0; i < v.size();i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main() {
    
    vector <int> v;
    vector <int> u;
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    v.push_back(0);
    v.push_back(0);
    v.push_back(0);
    
    u.push_back(1);
    u.push_back(2);
    u.push_back(3);
   


    display(v);
    display(u);

    merge(v, 3, u, 3);

    display(v);
    

    
}