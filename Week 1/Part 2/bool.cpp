# include <iostream>
using namespace std;

int main() {

    bool p = false;
    bool q = false;
    bool r = true;

    cout << (p == q == r) << endl; // gives 1
    // In this case hierarchy is left to right hence 0 == 0 -> 1 == 1 -> 1 
    // remember that here it is not right to left
}