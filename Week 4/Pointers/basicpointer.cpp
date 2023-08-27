#include <iostream>
using namespace std;

// pointers to receive address arguments
int sum(int* a, int* b) {
    return *a + *b;
}

int main() {
   
   int x = 5;

   // method 1
   int* p = &x;

   // method 2
   int *q = &x;

   cout << &x << " " << p << " " << q << endl; // same answer

   // Dereferencing Pointers (* Operators)
   cout << p << " " << *p << endl;

    // check
    x = 10;
    cout << p << " " << *p << endl;

    // check
    *p = 34;
    cout << p << " " << *p << endl;

    // address is not updated while updating values
    // *p is another way to access x;

    // sum of two numbers
    int a, b;
    cin >> a >> b;

    cout << sum(&a, &b) << endl; // sent address as argument


    // We can take input also using pointers
    int r , s;
    int* p1 = &r;
    int* p2 = &s;

    cout << "Enter first number: " << endl;
    cin >> *p1;
    cout << "Enter second number: " << endl;
    cin >> *p2;

    cout << r + s << endl; // Hell yeh it works


    // we can declare different ints in single line but there is error while doing so with pointers
    // remember tht
}