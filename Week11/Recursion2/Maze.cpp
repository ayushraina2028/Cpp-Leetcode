#include <iostream>
#include <climits>
#include <math.h>
using namespace std;

int findWaysofMaze(int row, int column) {
    // initially index row[0:3] and column[0:4]
    // if he moves down then row[1:3] and column[0:4]
    // if he moves right then row[0:3] and column[1:4] 
    
    if(row == 1 || column == 1) {
        return 1;
    }

    int ways = findWaysofMaze(row-1, column) + findWaysofMaze(row, column-1);

    return ways;


}

void printPath(int row, int column, string s) {
    if(row < 1 || column < 1) return;

    if(row == 1 && column == 1) cout << s << endl;

    printPath(row-1, column, s+"D");
    printPath(row, column-1, s+"R");

    return;
}


int main() {
    int a = 5;
    int b = 5;
    int ways = findWaysofMaze(a,b);
    cout << ways << endl; // Working Fine

    printPath(a,b,"");

}