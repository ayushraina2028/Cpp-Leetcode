#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main() {
    int arr[3][3];  // rows and columns both are equal to 3


    // Method 1 to initialize
    for(int i = 0;i < 3;i++) {
        for (int j = 0;j < 3;j++) {
            arr[i][j] = i*j;
        }
    }

    // printing
    for(int i = 0;i < 3;i++) {
        for (int j = 0;j < 3;j++) {
            cout << arr[i][j]; 
        }
        cout << endl;
    }
    cout << endl;

    // Method 2 to initialize (In this case initialization is necessary)
    int brr[][3] = {{1,2,3}, {4,5,6}, {7,8,9}}; // giving column name is necessary 

    // printing
    for(int i = 0;i < 3;i++) {
        for (int j = 0;j < 3;j++) {
            cout << brr[i][j]; 
        }
        cout << endl;
    }
    cout << endl;

    // Method 3
    int crr[3][3] = {1,2,3,4,5,6,7,8,9};

    // printing
    for(int i = 0;i < 3;i++) {
        for (int j = 0;j < 3;j++) {
            cout << crr[i][j]; 
        }
        cout << endl;
    }
    cout << endl;
}