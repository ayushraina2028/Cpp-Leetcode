#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main() {

    int rows;
    int columns;

    cout << "Enter rows: ";
    cin >> rows;

    cout << "Enter columns: ";
    cin >> columns;

    int arr[rows][columns];  // rows and columns both are equal to 3

    for(int i = 0;i < rows;i++) {
        for (int j = 0;j < columns;j++) {
            cout << "Enter Element " << "(" << i+1 << "," << j+1 << ") " ; 
            cin >> arr[i][j];
        }
        cout << endl;
    }
    cout << endl;


    // Check
    cout << "Your entered matrix is: " << endl;
    for(int i = 0;i < rows;i++) {
        for (int j = 0;j < columns;j++) {
            cout << arr[i][j] << " "; 
        }
        cout << endl;
    }
    cout << endl;

    
}