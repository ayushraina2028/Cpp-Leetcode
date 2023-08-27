#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main() {

    // Leetcode 54
    // print matrix in spiral means 1,2,3,6,9,8,7,4,5........
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
    for(int i = 0;i < rows;i++) { 
        for (int j = 0;j < columns;j++) {
            cout << arr[i][j] << "  "; 
        }
        cout << endl;
    }
    cout << endl;


    // spiral print


    
    int min_row = 0;
    int min_column = 0;
    int max_row = rows-1;
    int max_column = columns-1;


    while(min_row <= max_row && min_column <= max_column) {

    
        // right traverse
        for(int j = min_column;j <= max_column;j++) {
            cout << arr[min_row][j] << "  ";
        }
        min_row++;

        if(min_row > max_row || min_column > max_column) {
            break;
        }

        // down travers
        for(int i = min_row;i <= max_row;i++) {
            cout << arr[i][max_column] << "  ";
        }
        max_column--;


        if(min_row > max_row || min_column > max_column) {
            break;
        }
        
        //left traverse
        for(int j = max_column;j >= min_column;j--) {
            cout << arr[max_row][j] << "  ";
        }
        max_row--;

        if(min_row > max_row || min_column > max_column) {
            break;
        }
        
        // up traverse
        for(int i = max_row;i >= min_row;i--) {
            cout << arr[i][min_column] << "  ";
        }
        min_column++;

    }


    
    
}