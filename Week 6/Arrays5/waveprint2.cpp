#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main() {

    
    // print matrix in wave form means 7,8,9,6,5,4,1,2,3........
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


    // wave print
    cout << "Your wavepritn of matrix 1 is: " << endl;
    for(int j = columns-1;j >= 0;j--) { 
        if (j % 2 == 0) {
            for (int i = 0;i < rows;i++) {
            cout << arr[j][i] << "  "; 
        }
        
        }

        else {
            for (int i = rows-1; i >= 0;i--) {
                cout << arr[j][i] << "  ";
            }
        }
        
        
    }
    cout << endl;

    


    
    
}