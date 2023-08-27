#include <iostream>
#include <algorithm>
#include <climits>
#include <vector>

using namespace std;

int main() {

    int arr[] = {19, 12, -23, -8, 16};
    int n = sizeof(arr)/sizeof(arr[0]);


    // for each loop to print elements of array(NEW)
    for(int ele : arr) {
        cout << ele << " ";
    }
    cout << endl;


    // making a vector which will contain elements that are not visited
    vector <int> v(5,0);  // 0 means not visited
    int x = 0;

    for(int i = 0;i < n;i++) {
        int min = INT_MAX;
        int mindx = -1;
        for(int j = 0;j < n;j++) {
            if (v[j] == 1) continue;

            else if (arr[j] < min) {
                min = arr[j];
                mindx = j;
            }
        }
        arr[mindx] = x;
        v[mindx] = 1; // visited now
        x++;
    }

    //check 
    for(int ele : arr) {
        cout << ele << " ";  // working fine
    }
    cout << endl;


    // If only postive numbers are there then we do not need to use extra space
    // we can proceed by negative marking
}