#include <iostream>
#include <vector>
using namespace std;

// It is necessary to give size of 2D array here 
void change(int arr[3][3]) {
    arr[0][0] = 100;
}

int main() {
    
    // we cannot pass 2d array to function without giving size
    int arr[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
    change(arr);

    cout << arr[0][0] << endl;

}