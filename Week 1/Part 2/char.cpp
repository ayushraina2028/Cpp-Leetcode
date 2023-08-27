# include <iostream>
using namespace std;

int main() {

    // char data type
    char ch = 'a'; // we need to give in single inverted comma only

    // char ch = 'ab' this is not a character
    // to get ascii values we can use type casting

    cout << (int)ch << endl;

    // remember 3 ascii values always
    cout << (int)'a' << " " << (int)'A' << endl; // a-97, A-65

    // and for 0 it is 48
    char ch1 = '0';
    cout << (int)ch1 << endl;




}