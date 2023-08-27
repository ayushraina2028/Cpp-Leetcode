#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;




int main() {

    cout << "Enter number of rows: " << endl;
    int rows;
    

    int columns;
    cin >> rows;

    cout << "Enter number of columns: " << endl;
    cin >> columns;

    cout << "Enter matrix 1: " << endl;
    int matrix1[rows][columns];
    for(int i = 0;i < rows;i++) {
        for(int j = 0;j < columns;j++) {
            cout << "Enter Element " << "(" << i+1 << "," << j+1 << ") " ; 
            cin >> matrix1[i][j];
        }
    }


    // Printing the matrix
    cout << "matrix1: " << endl;
    for(int i = 0;i < rows;i++) {
        for(int j = 0;j < columns;j++) {
            cout << matrix1[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;

    // matrix will be of odd square order
    int pivot = (rows+1)/2;
    for(int i = 0;i<rows;i++) {
        if(i == pivot-1) {
            for(int j = 0; j < columns;j++) {
                cout << matrix1[i][j] << " ";
            }
            cout << endl;
        }
        else {
            cout << "  " << matrix1[i][pivot-1] << endl;
        }
    }


    
}