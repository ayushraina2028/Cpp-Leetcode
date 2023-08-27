#include <iostream>
#include <algorithm>
#include <climits>
#include <vector>
using namespace std;

// Problem 1

void display(vector <int> v) {
    for(int i = 0; i < v.size();i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main() {
    
    vector <int> v;
    cout << "Enter Size: " << endl;
    int n;
    cin >> n;

    for(int i = 0; i < n;i++) {
        cout << "Enter Element " << i << endl;
        int x;
        cin >> x;
        v.push_back(x);
    }

    cout << "Enter Target: " << endl;
    int target;
    cin >> target;

    // function for displaying vector
    display(v);

    // solution
    for(int i = 0; i < v.size();i++) {
        for(int j = i+1;j < v.size();j++) {
            if(v[i] + v[j] == target) {
                cout << i << " " << j << endl;
                break;
            }
        }
    }

    
}