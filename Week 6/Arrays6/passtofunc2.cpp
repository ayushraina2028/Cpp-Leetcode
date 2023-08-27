#include <iostream>
#include <vector>
using namespace std;

// It is necessary to give size of 2D array here 
void change2DVector(vector <vector <int>> &v) {
    v[0][0] = 100;
}

int main() {
    
    // we cannot pass 2d array to function without giving size
    // hence we use 2D vectors
    vector <vector <int>> v;
    vector <int> v1 = {1,2,3};
    vector <int> v2 = {4,5};
    vector <int> v3 = {6,7,8,9,10};

    v.push_back(v1);
    v.push_back(v2);
    v.push_back(v3);

    change2DVector(v);

    cout << v[0][0] << endl;
    // see working fine
}