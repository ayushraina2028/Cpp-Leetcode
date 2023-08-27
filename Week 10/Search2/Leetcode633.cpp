#include <iostream>
#include <algorithm>
#include <climits>
#include <cmath>
#include <vector>

using namespace std;


bool isPerfectSquare(int n) {

    int root = sqrt(n);
    if(root*root == n) {
        return true;
    }
    else {
        return false;
    }
}

bool judgeSquareSum0(int n) {
    int x = 0;
    int y = n;

    while(x <= y) {
        if(isPerfectSquare(x) && isPerfectSquare(y)) {
            return true;
        }
        else {
            x++;
            y--;
        }
    }

}

bool judgeSquareSum(int n) {

    int x = 0;
    int y = n;

    while(x <= y) {
        if(isPerfectSquare(x) && isPerfectSquare(y)) {
            return true;
        }
        else if(!isPerfectSquare(y)) {
            int root = sqrt(y);
            y = root*root;
            x = n-y;
        }
        else {
            int soot = sqrt(x)+1;
            x = soot*soot;
            y = n - x;
        }
    }
    
}

int main() {

    int x = 6;

    // o(n)
    cout << "Answer is: " << judgeSquareSum0(x) << endl;
    
    
    // o(log(n))
    cout << "Answer is: " << judgeSquareSum(x) << endl;
    
}