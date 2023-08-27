#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector <vector <int>> transpose(vector <vector <int>> &matrix) {
        int rows = matrix.size();
        int columns = matrix[0].size();

        vector <vector<int>> matrix_t(columns, vector<int> (rows));
        for(int i = 0; i < rows;i++) {
            for(int j = 0; j < columns;j++) {
                matrix_t[j][i] = matrix[i][j];
            }
        }

        //check 
        for(int i = 0; i < columns;i++) {
            for(int j = 0; j < rows;j++) {
                cout << matrix_t[i][j] << " ";
            }
            cout << endl;
        }
        return matrix_t;
}


int main() {

    // 2D vector
    vector <vector <int>> matrix = {{1,2,3},{4,5,6},{7,8,9}};
    

    // dont run it just paste above code on leetcode
    transpose(matrix);
    
}