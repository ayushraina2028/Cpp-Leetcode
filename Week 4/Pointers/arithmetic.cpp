#include <iostream>
using namespace std;



int main() {

    int x = 7;
    int* ptr = &x;
    cout << ptr << endl; // 0x61ff08

    ptr += 1;
    cout << ptr << endl; // 0x61ff0c

    ptr += 1;
    cout << ptr << endl; // 0x61ff10

    // we can see that by this operation we are pointing to next integer and difference in 4 bytes
    // If you do same with bool pointer then difference will be 1 byte

    // lets try some dangerous thing
    int y = 10;
    int* p = &y;
    cout << *p << endl;

    (*p)++; // pointer increment
    cout << *p << endl;

    p += 1;
    cout << *p << endl; // garbage value is printed

    // Preincrement and Postincrement in case of pointers
    int a = 78;
    int* p1 = &a;
    
    // Preincrement 
    int b = ++(*p1);  // b ko increment krne k baad value do

    // Post increment
    int c = (*p1)++;  // b kp increment krne se pahle value dedo
    // aur increment *p1 hoga c nahi

    cout << b << " " << c << " " << *p1 << endl;  
    // 79 79 80 (correct!)

    


}