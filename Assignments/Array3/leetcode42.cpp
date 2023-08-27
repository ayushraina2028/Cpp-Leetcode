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

int trap(vector<int>& height) {
        int count = 0;

        // we need previous greatest element array and next greatest element array here 

        // previous greatest element array 
        int n = height.size();
        vector <int> prev(n);

        prev[0] = -1;
        int max = prev[0];

        // efficient way to calculate prev greatest element array 
        for(int i = 0; i < n;i++) {
            prev[i] = max;
            if (max < height[i]) {
                max = height[i];
            }
        }

        // next greatest element array
        vector <int> next(n);

        next[n-1] = -1;
        max = next[n-1];

        for(int i = n-1;i >= 0;i--) {
            next[i] = max;
            if (max < height[i]) {
                max = height[i];
            }
        }

        // now we have prev and next greatest element array


        // minimum wala array
        vector <int> mini(n);
        for(int i = 0;i < n;i++) {
            mini[i] = min(prev[i], next[i]);
        }

        int water = 0;
        for(int i = 1;i < n-1;i++) {
            if(height[i] < mini[i]) {
                water += mini[i] - height[i];
            }
        }

    }



int main() {
    
    vector <int> v;
    
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(2);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(3);
    v.push_back(2);
    v.push_back(1);
    v.push_back(2);
    v.push_back(1);
    
    


    display(v);

    trap(v);
    display(v);
    

    
}