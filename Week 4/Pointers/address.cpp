#include <iostream>
using namespace std;



int main() {
    
    int x; // memory is allocated now
    cout << &x << endl; // prints addresss 0x61ff0c 

    x = 5;
    cout << &x << endl; // prints addresss 0x61ff0c 

    x = 7;
    cout << &x << endl;// prints addresss 0x61ff0c 

    // all 3 times address came same but it can come different remember that

    float y = 7.3;
    cout << &y << endl; // 0x61ff08

    int a = 5, b = 7;
    cout << &a << " " << &b << endl;  // address will be different

    // we can store these addresses in pointers
}