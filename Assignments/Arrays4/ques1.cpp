#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main() {

    
    int arr[5][5];  // rows and columns both are equal to 3

    for(int i = 0;i < 5;i++) {
        for (int j = 0;j < 5;j++) {
            arr[i][j] = 10;
        }
        cout << endl;
    }
    cout << endl;


    // Check
    cout << "Your matrix is: " << endl;
    for(int i = 0;i < 5;i++) {
        for (int j = 0;j < 5;j++) {
            cout << arr[i][j] << " "; 
        }
        cout << endl;
    }
    cout << endl;

    
}