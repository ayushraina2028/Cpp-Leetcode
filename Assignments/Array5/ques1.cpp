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

    // Print both diagonals of Square matrix
    int i = 0;
    int j = columns - 1;
    
    for(int k = 0;k < rows;k++) {

        if (i >= columns/2) {
            if(matrix1[k][i] == matrix1[k][j]) {
                cout << matrix1[k][i] << endl;
            }
            else {
                cout << matrix1[k][j] << " " << matrix1[k][i] << endl;
            }
        }
        else {
            if(matrix1[k][i] == matrix1[k][j]) {
                cout << matrix1[k][i] << endl;
            }
            else {
                cout << matrix1[k][i] << " " << matrix1[k][j] << endl;
            }
        }    
            
            
            i++; j--;
    }
    
    
}