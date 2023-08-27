#include <iostream>
using namespace std;

int main() {
    int x = 5;
    int* ptr = &x;
    int** p = &ptr;

    cout << x << endl;  // 5
    cout << ptr << endl;  // 0x7fffffffdd54
    cout << p << endl; // 0x7fffffffdd58

    // see these inputs now
    cout << *ptr << endl; // 5
    cout << *p << endl; // 0x7fffffffdd54
    cout << **p << endl; // 5

    // we can even use triple pointers by the same way

}