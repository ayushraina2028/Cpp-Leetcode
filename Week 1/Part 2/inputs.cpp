# include <iostream>
using namespace std;

int main() {

    int x;
    cout << "Enter a number: " ;
    cin >> x;
    cout << "Entered number is: " << x;

    cout << endl;

    //Square of number
    int y;
    y = x*x;
    cout << "The square of entered number is: " << y << endl;

    // sum of 2 numbers
    int a, b;
    cout << "Enter your two numbers: " << endl;
    cin >> a >> b ;
    cout << "The Sum is: " << a + b << endl;

    // Relational operators ==, =, > etc
    // != is not equal to

    // sometricky codes
    int c;
    c = 7;
    cout << (c = 9) << endl; // 9 will be printed

    // x += 8 is more fast then x = x + 8 in steps

    

    
}