#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <sstream>

using namespace std;

void display(vector <string> &strs) {
    for(int i = 0; i < strs.size(); i++) {
        cout << strs[i] << " " << endl;
    }
}

string longestCommonPrefix(vector <string> &strs) {
    sort(strs.begin(), strs.end());

    if(strs.size() == 1) return strs[0];

    int n = strs.size();
    string first = strs[0];
    string last = strs[n-1];
    string common = "";

    for(int i = 0 ; i < min(first.length(), last.length()) ; i++) {
        if(first[i] == last[i]) common += first[i]; 
        else return common;
    }

    return common;
}

int main() {

    vector <string> strs = {"flower","flow","flight"};
    string str = longestCommonPrefix(strs);

    cout << str << endl;
}