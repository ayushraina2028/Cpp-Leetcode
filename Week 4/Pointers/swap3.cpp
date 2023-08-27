#include <iostream>
using namespace std;

// This thing is pass by reference just remember it
// this is first swap code if i just take arguments as &a, &b then it works
void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
    return;
}

int main() {
    int a = 4, b = 5;
    cout << "Initial: " << a << " " << b << endl;
   
    // function call
    swap(a,b);
    cout << "finally: " << a << " " << b << endl; // yeah swapped but why ?
}