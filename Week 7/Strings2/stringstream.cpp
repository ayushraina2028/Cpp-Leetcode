#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <sstream>

using namespace std;

int main() {
    // used in Leetcode 151
    string str = "ayush raina is a college student"; //print all these separately
    stringstream ss(str);
    string temp;

    while(ss >> temp) {
        cout << temp << endl;
    }

}