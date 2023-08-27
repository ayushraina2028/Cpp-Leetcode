# include <iostream>
using namespace std;

int main() {

    // Ques 4
    float r, h;
    cout << "Enter radius: ";
    cin >> r;
    cout << "Enter height: ";
    cin >> h;

    cout << "Volume of this cylinder is: " << 3.1415*r*r*h << endl;

    // difference of two ascii values
    char ch1, ch2;
    cout << "Enter char 1: ";
    cin >> ch1;
    cout << "Enter char 2: ";
    cin >> ch2;

    cout << "ASCII value of " << ch1 << " is " << (int)ch1 << endl;
    cout << "ASCII value of " << ch2 << " is " << (int)ch2 << endl;
    cout << "Difference in ascii values is: " << (int)ch1 - (int)ch2 << endl;


}