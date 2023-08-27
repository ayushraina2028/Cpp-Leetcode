#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "ayush raina"; // size is 12(hover) 11 character and 1 null character
    cout << str;
    cout << endl;

    str[0] = 'p';
    cout << str;
    cout << endl;

    cout << str[2] << endl;

    // input (string without spaces)
    // string s;
    // cin >> s;  
    // cout << s;

    // Error comes when there is space in string that we give at input
    // for this we use getline
    // (input with spaces)
    string s1;
    getline(cin, s1);
    cout << s1 << endl;

    


}