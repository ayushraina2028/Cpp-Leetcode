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

    int arr1[rows][columns];  // rows and columns both are equal to 3

    for(int i = 0;i < rows;i++) {
        for (int j = 0;j < columns;j++) { 
            cin >> arr1[i][j];
        }
        cout << endl;
    }
    cout << endl;

    cout << "Your entered matrix 1 is: " << endl;
    for(int i = 0;i < 3;i++) { 
        for (int j = 0;j < 3;j++) {
            cout << arr1[i][j] << " "; 
        }
        cout << endl;
    }
    cout << endl;

    int arr2[rows][columns];
    for(int i = 0;i < rows;i++) {
        for (int j = 0;j < columns;j++) {
            cin >> arr2[i][j];
        }
        cout << endl;
    }
    cout << endl;

    cout << "Your entered matrix 2 is: " << endl;
    for(int i = 0;i < 3;i++) {
        for (int j = 0;j < 3;j++) {
            cout << arr2[i][j] << " "; 
        }
        cout << endl;
    }
    cout << endl;


    int sum_grid[rows][columns];
    for(int i = 0;i < rows;i++) {
        for (int j = 0;j < columns;j++) {
            sum_grid[i][j] = arr1[i][j] + arr2[i][j];
        }
        cout << endl;
    }
    cout << endl;

    cout << "Your Sum of 2 matrices is: " << endl;
    for(int i = 0;i < 3;i++) {
        for (int j = 0;j < 3;j++) {
            cout << sum_grid[i][j] << " "; 
        }
        cout << endl;
    }
    cout << endl; // Workking correctly


    // we can print sum without creating new array because we just need to print sum

    
}