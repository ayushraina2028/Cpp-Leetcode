#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main() {

    
    // print matrix in wave form means 1,2,3,6,5,4,7,8,9........
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
    for(int i = 0;i < rows;i++) { 
        if (i % 2 == 0) {
            for (int j = 0;j < columns;j++) {
            cout << arr[i][j] << "  "; 
        }
        
        }

        else {
            for (int j = n-1; j >= 0;j--) {
                cout << arr[i][j] << "  ";
            }
        }
        
        
    }
    cout << endl;

    


    
    
}