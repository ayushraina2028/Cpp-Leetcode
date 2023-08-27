#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    // strings taken in right to left order of any length from parent string is called substring
    string s = "abcdef";
    cout << s.substr(0) << endl;
    cout << s.substr(1) << endl;
    cout << s.substr(2) << endl;
    cout << s.substr(3) << endl;
    cout << s.substr(4) << endl;
    cout << endl;

    // print from b to d
    // substr(idx, length)

    cout << s.substr(1,3) << endl;
    cout << s.substr(2,3) << endl;
    
}