#include <iostream>
#include <vector>
#include <climits>
using namespace std;

bool canTravel(long long int mid, vector <int> time, int totalTrips) {
    int trips = 0;
    for(int i = 0; i < time.size(); i++) {
        if(mid >= time[i]) {
            trips += mid/time[i];
        }
        if(trips >= totalTrips) return true;
    }
    if(trips < totalTrips) return false;
    return true;
}

long long minimumTime(vector<int>& time, int totalTrips) {
    long long int lo = 1;
    long long int min = INT_MAX;
    long long int hi;
    long long int minTime = 0;
    for(int i = 0; i < time.size(); i++) {
        if (min > time[i]) {
            min = time[i];
        }
    }

    hi = totalTrips*min;

    cout << lo << " " << hi << endl;

    while(lo <= hi) {
        long long int mid = lo + (hi-lo)/2;

        if(canTravel(mid, time, totalTrips)) {
            minTime = mid;
            hi = mid-1;
        }
        else {
            lo = mid + 1;
        }
    }
    
    return minTime;
}

int main() {
    vector <int> v = {1,2,3,4,5};
    int totalTrips = 100;
    cout << minimumTime(v, totalTrips) << endl;
}