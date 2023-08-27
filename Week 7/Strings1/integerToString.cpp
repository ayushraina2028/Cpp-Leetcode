#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int x = 173435;
    //typecasting cannot be used here because

    string s = to_string(x);
    cout << s << endl;


    // Ques:- find number of digits without using any loop
    cout << s.length() << endl;
}