#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    // matrix multiplication


    // Take matrix 1 as input
    int rows1;
    int columns1;

    cout << "Enter rows for matrix 1: ";
    cin >> rows1;

    cout << "Enter columns for matrix 1: ";
    cin >> columns1;

    int matrix1[rows1][columns1];  

    for(int i = 0;i < rows1;i++) {
        for (int j = 0;j < columns1;j++) { 
            cin >> matrix1[i][j];
        }
        cout << endl;
    }
    cout << endl;  // matrix is created 

    cout << "Your entered matrix 1 is: " << endl;
    for(int i = 0;i < rows1;i++) { 
        for (int j = 0;j < columns1;j++) {
            cout << matrix1[i][j] << "  "; 
        }
        cout << endl;
    }
    cout << endl;


    // Take matrix 2 as input
    int rows2;
    int columns2;

    cout << "Enter rows for matrix 2: ";
    cin >> rows2;

    cout << "Enter columns for matrix 2: ";
    cin >> columns2;

    int matrix2[rows2][columns2];  

    for(int i = 0;i < rows2;i++) {
        for (int j = 0;j < columns2;j++) { 
            cin >> matrix2[i][j];
        }
        cout << endl;
    }
    cout << endl;  // matrix is created 

    cout << "Your entered matrix 2 is: " << endl;
    for(int i = 0;i < rows2;i++) { 
        for (int j = 0;j < columns2;j++) {
            cout << matrix2[i][j] << "  "; 
        }
        cout << endl;
    }
    cout << endl;

    if(columns1 == rows2) {
        int matrix_mult[rows1][columns2];
        for(int i = 0; i < rows1;i++) {
            for(int j = 0;j < columns2;j++) {
                matrix_mult[i][j] = 0;
                for (int k = 0;k < columns1;k++) {
                    matrix_mult[i][j] += matrix1[i][k]*matrix2[k][j];
                }
            }
        }
        cout << "Your required matrix is: " << endl;
        for(int i = 0;i < rows1;i++) { 
            for (int j = 0;j < columns2;j++) {
                cout << matrix_mult[i][j] << "  "; 
        }
        cout << endl; // Working Fine
    }
    cout << endl;
    }

    else {
        cout << "Matrix Multiplication is not possible: ";
    }

    



    
    
    
    
    
}