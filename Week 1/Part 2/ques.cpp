# include <iostream>
using namespace std;

int main() {

    // take input and get half of number as output
    int x;
    cout << "Enter integer: ";
    cin >> x;

    float y = (float)x;
    cout << y/2 << endl;

    // Take float input as print fractional part
    float z;
    cout << "Enter float: ";
    cin >> z;

    if (z > 0) {
        cout << (float)(z - (int)z) << endl;
    }
    else {
        cout << (float)(1 + (z - (int)z)) << endl; // bcoz z - (int)z is negative
    }
}