#include <iostream>
using namespace std;

// need for pointers

void swap(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    return;
}

int main() {
    int a = 4, b = 5;
    
    // function call
    swap(a,b);

    cout << a << " " << b;  // but numbers are not swapped because we know that
    // not actual addresses are sent there
}