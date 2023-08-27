#include <iostream>
#include <algorithm>
#include <climits>
#include <cmath>
#include <vector>

using namespace std;

bool checkEatingSpeed(vector <int> piles, int mid, int hours) {
    int count = 0;
    int idx = 0;
    int temp = mid;
    int n = piles.size();

    while(count <= hours) {

        if(idx == n) {
            return true;
        }

        else if(piles[idx] <= temp) {
            count++;
            idx++;
        }
        else if(piles[idx] > temp) {

            int c = piles[idx]/temp;
            if(temp*c != piles[idx]) {
                count += c+1;
                idx++;
            }
            else {
                count += c;
                idx++;
            }
            
        }
    }

    return false;
}

int minEatingSpeed(vector <int> piles, int hours) {

    int n = piles.size();
    if(n==1) {
        return piles[0]%hours + 1;
    }

    int low = 1;
    int high = *max_element(piles.begin(), piles.end());
    int answer = high;

    int mid;

    while(low <= high) {

        mid = low + (high-low)/2;

        if(checkEatingSpeed(piles, mid, hours)) {
            answer = mid;
            high = mid-1;
        }
        else {
            low = mid + 1;
        }
    }

    return answer;
}

int main() {

    vector <int> v = {30,11,23,4,20};
    for(int i=0; i<v.size(); i++) {
        cout << v[i] << " ";
    }

    cout << endl;
    int hours = 6;

    int minSpeed = minEatingSpeed(v,hours);

    cout << minSpeed << endl;

}