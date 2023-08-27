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

   int sum = 0;
   int maxsum = 0;
   int idx = -1;
   
    // print row number having maximum sum
    for(int k = 0;k < rows;k++) {
        sum = 0;
        for(int x = 0; x < columns ; x++) {
            sum += matrix1[k][x];
            
        }

        if(maxsum < sum) {
            maxsum = sum;
            idx = k;
        }
    }

    cout << idx << " " << maxsum << endl;
    


    
}