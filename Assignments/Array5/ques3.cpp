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

    // Print Given matrix in wave form Method 1
    int min_row = 0;
    int max_row = rows-1;
    int min_column = 0;
    int max_column = columns-1;

    while(min_column <= max_column) {

        for(int i = max_row;i >= min_row;i--) {
            cout << matrix1[i][min_column] << " ";
        }
        min_column++;
        if (min_column > max_column) break;

        for(int i = min_row;i <= max_row;i++) {
            cout << matrix1[i][min_column] << " ";
        }
        min_column++;
    }

    // Method 2 Even Odd ;- Normal Printing on odd indexes and reverse on
    
}