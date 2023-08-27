#include <iostream>
#include <vector>
using namespace std;


int main() {
    // leetcode 118 , HW Leetcode 119
    // Given an integer numRows generate Pascals triangle

    int n;
    cout << "Enter n: ";
    cin >> n;

    // create 2D vector with n rows and columns will be variable
    vector <vector <int> > v;
    for (int i = 1; i <= n;i++) {
        vector <int> a(i);
        v.push_back(a); // adding vector of required size
    }

    // value at index i,j is iCj;
    // but here we will use method 3


    // first fill first and last element by 1 then fill by required sums
    // v[i][j] = v[i-1][j] + v[i-1][j-1]

    for (int i = 0;i < n;i++) {
        for (int j = 0;j <= i;j++) {
            if (j == 0 || j == i) {
                v[i][j] = 1;
            }
            else {
                v[i][j] = v[i-1][j] + v[i-1][j-1];
            }
        }
    }
    
    // printing
    for (int i = 0;i < n;i++) {
        for (int j = 0;j <= i;j++) {
            cout << v[i][j] << "  ";
        }
        cout << endl;
    }

    // see working very fine
    
    
}