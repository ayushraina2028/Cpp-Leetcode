#include <iostream>
#include <algorithm>
#include <climits>
#include <vector>
#include <cmath>
using namespace std;

// Problem 3

void display(vector <int> v) {
    for(int i = 0; i < v.size();i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

int arraytointeger(vector<int> &v) {
    int integer = 0;
    int power = v.size()-1;
    for(int i = 0;i <= power;i++) {
        integer += v[i]*pow(10,power-i);
    }

    return integer + 1;
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
    cout << "Required Integer: " << arraytointeger(v) << endl;
}