#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main() {

    // find transpose of a given matrix and store it in a new matrix
    int rows;
    int columns;

    cout << "Enter rows: ";
    cin >> rows;

    cout << "Enter columns: ";
    cin >> columns;

    int arr[rows][columns];  

    for(int i = 0;i < rows;i++) {
        for (int j = 0;j < columns;j++) { 
            cin >> arr[i][j];
        }
        cout << endl;
    }
    cout << endl;  // matrix is created 

    cout << "Your entered matrix 1 is: " << endl;
    for(int i = 0;i < 3;i++) { 
        for (int j = 0;j < 3;j++) {
            cout << arr[i][j] << "  "; 
        }
        cout << endl;
    }
    cout << endl;


    // create transpose matrix;
    int arr_t[columns][rows];
    for(int i = 0;i < rows;i++) { 
        for (int j = 0;j < columns;j++) {
            arr_t[j][i] = arr[i][j]; 
        }
        cout << endl;
    }
    cout << endl;

    // print transpose
     for(int i = 0;i < columns;i++) {
        for (int j = 0;j < rows;j++) { 
            cout << arr_t[i][j] << "  ";
        }
        cout << endl;
    }
    cout << endl; // see working fine



    
    
}