#include <iostream>
using namespace std;

float circum() {
    int r = 10;
    cout << (2*3.14*r);
}

int ques() {
    int a = 4;
    int b = 5;
    a++, b--;
    cout << ++a << " " << b--;
}

int main() {
    // Question 1
    cout << "Physics" << endl;
    cout << "Wallah";
    cout << endl;

    // Question 2
    int a = 5, b = 2;
    cout << a*b << endl;

    // Question 3
    cout << "The size of bool is 1 byte" << endl;
    cout << "The size of int is 4 byte" << endl;
    cout << "The size of float is 4 byte" << endl;

    // Question 4
    ques(); // answer will be 6 and 4

    cout << endl;

    // Question 5
    circum();

    return 0;
}