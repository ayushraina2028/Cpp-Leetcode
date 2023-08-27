# include <iostream>
using namespace std;

int main() {

    // used to change value from one data type to another

    // Bad way
    float x = 7.1;
    int y = x;
    cout << y << endl;
 
    // good way
    int z;
    z = (int)x;
    cout << z << endl;

    char ch = 'r';
    int ch1 = (int)ch;
    cout << ch1 << endl;

    // some interconversions are done by itself like
    cout << ch + 100 << endl;
    
}