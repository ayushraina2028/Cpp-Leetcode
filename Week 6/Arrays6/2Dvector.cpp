#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;



int main() {
    // 2D vectors
    // We can increase rows
    // we can use variable columns means different rows can have different number of columns

    

    // suppose i want to push 1D arrays into a single 2D vector we can do so
    vector <int> v1 = {1,2,3};
    vector <int> v2 = {4,5};
    vector <int> v3 = {6,7,8,9,10};

    // Initialization method 1
    vector <vector <int> > v = {{1,2,3}, {4,5}, {6,7,8,9,10}};
    // here are 3 columns and 3,2,5 columns of row 1,2,3 respectively


    // in 2D arrays we cannot pushback integers, we can pushback vectors
    // Initialization method 2
    vector <vector <int> > v4;
    v.push_back(v1);
    v.push_back(v2);
    v.push_back(v3);





}