#include <iostream>
#include <vector>
using namespace std;



int main() {

    int m = 3, n = 3, k = 3;
    
    // declaration 1
    vector <vector <int> > v1;

    // declarations 2
    vector <vector <int> > v2(m); // it can store m 1D vectors

    // declaration 3
    vector <vector <int> > v3(m, vector <int> (n)); 
    // vector with m rows and n columns

    // declaration 4
    vector <vector <int> > v4(m, vector <int> (n,k));
    // n columns with each element initialized as k

     


}