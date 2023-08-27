#include <iostream>
using namespace std;

int main() {

    cout << "Welcome To Indian Institute of Science" ;
    cout << endl;
// we know basic things about cout and endl
// in C++ return 0 is optional but in C it is mandatory

    // Here is good practice to give endline using \n and endl
    cout << "My name is Ayush Raina";
    cout << endl;
    cout << "\n";
    cout << "I love machine learning in python";
    cout << endl;

    // Division operator in C++ 
    int x = 5;
    int y = 2;

    cout << x/y;  // it becomes greatest integer  
    cout << endl;
    // Preincrement and post increment
    cout << ++x; // 6 because first increment then print
    cout << endl;

    cout << y++ << endl;  // here 2 because this is post increment
    cout << y << endl; //3 because last line post incremented this


    // Float
    float ayush = 7.88976;
    cout << ++ayush << endl;

    // check the output of this
    cout << 5/2 << endl;
    cout << 5.0/2 << endl;
    cout << 5/2.0 << endl;
    cout << 5.0/2.0 << endl;


    // Find remainder when a divided by b, a and b are both integers
    int a = 13;
    int b = 5;
    int r, q;
    q = a/b;
    r = a - q*b;
    cout << r << endl;

    // Method 2 is by remainder operator %
    cout << a%b << endl;

    // properties of remainder operator
    // 1. a % (-b) = a % b
    // 2. (-a) % b = -(a % b)
    // 3. (-a) % (-b) = -(a % b)
    // 4. If a < b then a % b = a

    // Boolean Data Type
    // True = 1
    // False = 0

    bool flag = false;
    cout << flag << endl;  // 0 is printed

    bool flag1 = 238;  // all integers are true except 0, even decimal numbers are true
    cout << flag1 << endl; // 1 is printed

    






}

