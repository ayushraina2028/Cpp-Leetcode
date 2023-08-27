#include <iostream>
#include <algorithm>
#include <climits>
#include <vector>
using namespace std;

// Problem 3

void display(vector <int> v) {
    for(int i = 0; i < v.size();i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

int binarySearch(vector<int> &v, int target) {
    int low = 0;
    int high = v.size() - 1;
    
    while(low <= high){
        int mid = (high+low)/2;

        if(v[mid] == target) {
            return mid;
        }

        if(v[mid] > target) {
            high = mid-1;
        }

        if(v[mid] < target) {
            low = mid + 1;
        }

    }
    return low;    
}

int main() {
    
    vector <int> v;
    cout << "Enter Size: " << endl;
    int n;
    cin >> n;

    for(int i = 0; i < n;i++) {
        cout << "Enter Element " << i+1 << endl;
        int x;
        cin >> x;
        v.push_back(x);
    }

    int target;
    cout << "Enter Target Value: " << endl;
    cin >> target;



    // function for displaying vector
    display(v);

    // solution(A Simple Binary Search Algorithm)
    cout << "Correct Index: " << binarySearch(v, target) << endl;
}