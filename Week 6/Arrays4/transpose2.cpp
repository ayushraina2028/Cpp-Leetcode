#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main() {

    // find transpose of a given square matrix without new matrix
    int rows;
    int columns;
    int n;

    cout << "Enter n: ";
    cin >> n;

    rows = n;
    columns = n;

    int arr[rows][columns];  

    for(int i = 0;i < rows;i++) {
        for (int j = 0;j < columns;j++) { 
            cin >> arr[i][j];
        }
        cout << endl;
    }
    cout << endl;  // matrix is created 

    cout << "Your entered matrix 1 is: " << endl;
    for(int i = 0;i < rows;i++) { 
        for (int j = 0;j < columns;j++) {
            cout << arr[i][j] << "  "; 
        }
        cout << endl;
    }
    cout << endl;

    // transposing
    for(int i = 0;i < rows;i++) { 
        for (int j = 0;j < columns;j++) {
            if (i != j && i < j) {    // without i < j matrix will remain same
                int temp = arr[i][j];
                arr[i][j] = arr[j][i];
                arr[j][i] = temp;
            }
        }
        cout << endl;
    } // method 2 is start j from i+1;
    


    cout << "Your Transposed matrix 1 is: " << endl;
    for(int i = 0;i < rows;i++) { 
        for (int j = 0;j < columns;j++) {
            cout << arr[i][j] << "  "; 
        }
        cout << endl;
    }
    cout << endl;

    


    
    
}