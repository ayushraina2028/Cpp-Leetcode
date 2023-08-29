#include <iostream>
#include <string>
using namespace std;

void generateBinaryStrings(string s, int n) {
    if(s.length()==n) {
        cout << s << endl;
        return;
    }

    // In case of 0 as last charatcer or empty string, make both calls
    if(s[s.length()-1]=='0' || s == "") {
        generateBinaryStrings(s+'0',n);
        generateBinaryStrings(s+'1',n);
    }
    // In case of 1 as last character, make first call only
    else { 
        generateBinaryStrings(s+'0',n);
    }
    
}

int main() {
    // Find all Binary strings without Consecutive Ones
    int n = 4;


    // First generate all binary strings and then apply condition for filter
    generateBinaryStrings("",n);
}