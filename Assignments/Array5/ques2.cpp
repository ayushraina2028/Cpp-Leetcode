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

    // Just taking matrix as input
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

    // Rotate Given matrix 90 degree anticlockwise

    // first reverse
    for(int k = 0; k < rows;k++) {
        int i = 0;
        int j = columns - 1;

        while(i <= j) {
            swap(matrix1[k][i], matrix1[k][j]);
            i++; j--;
        }
    }


    // then take transpose
    for(int i = 0;i < rows;i++) {
        for(int j = 0;j < columns;j++) {
            if(i != j && i < j) {
                swap(matrix1[i][j], matrix1[j][i]);
            }
        }
    }
    
    // check
    cout << "matrix1: " << endl;
    for(int i = 0;i < rows;i++) {
        for(int j = 0;j < columns;j++) {
            cout << matrix1[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;
    
}