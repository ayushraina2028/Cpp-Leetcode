#include <iostream>
#include <algorithm>
#include <climits>
#include <vector>
#include <cmath>
using namespace std;

// Problem 6

void display(vector <int> v) {
    for(int i = 0; i < v.size();i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

bool twice_appear(vector <int> &v) {
    int n = v.size();
    
    for(int i = 0;i < n;i++) {
        for(int j = i+1;j < n;j++) {
            if(v[i] == v[j]) {
                return true;

            }
        }
    }

    return false;
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

    // function for displaying vector
    display(v);

    // solution
    int result = twice_appear(v);

    if(result == 1) {
        cout << "True" << endl;
    }
    else {
        cout << "False" << endl;
    }
}