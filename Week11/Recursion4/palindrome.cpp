#include <iostream>
#include <string>
using namespace std;

bool isPalindromeUsingRecursion(string str,int i, int j) {
    
    if(str[i]==str[j]) {
        isPalindromeUsingRecursion(str,++i,--j); // Best Use of pre increment.
    }
    else {
        return false;
    }
    
    if(i > j) return true;

    return true;
}

bool isPalindrome(string str) {
    int i = 0;
    int j = str.length()-1;
    while(i < j) {
        if(str[i]!=str[j]) return false;
        i++;
        j--;
    }
    return true;
}

int main() {
    string str = "racecar";
    cout << (bool)isPalindrome(str) << endl;

    cout << isPalindromeUsingRecursion(str,0,str.length()-1) << endl;
}