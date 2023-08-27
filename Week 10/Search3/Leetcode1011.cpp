#include <iostream>
#include <algorithm>
#include <climits>
#include <cmath>
#include <vector>

using namespace std;

bool checkWork(vector <int> weights, int mid, int days) {
    int count = 0;
    int idx = 0;    
    int temp = mid;
    while(count < days) {

        if(idx == weights.size()) {
            return true;
        }

        else if(weights[idx] <= temp) {
            temp -= weights[idx];
            idx++;
        }
        else {
            count++;
            temp = mid;
        }
    }

    return false;
}

int shipWithinDays(vector <int> weights, int days) {

    int low = *max_element(weights.begin(),weights.end());
    int high = 0;
    int n = weights.size();
    int mid;
    int ans = high;

    for(int i = 0;i < n;i++) {
        high += weights[i];
    }

    while(low <= high) {
        mid = low + (high - low) / 2;
        if(checkWork(weights,mid,days)) {
            ans = mid;
            high = mid-1;
        }
        else {
            low = mid+1;
        }
    }

    return ans;

}

int main() {

    vector <int> v = {1,2,3,1,1};
    for(int i=0; i<v.size(); i++) {
        cout << v[i] << " ";
    }

    cout << endl;

    int minCapacity = 0;
    int days = 4;
    minCapacity = shipWithinDays(v,days);

    cout << minCapacity << endl;
}