#include <iostream>
#include <string>
#include <vector>
using namespace std;

void printSubsets(string ans,string str,vector <string>& v) {
    if(str == "") {
        if(ans == "") {
            v.push_back("Empty");
        }
        v.push_back(ans);
        return;
    }

    printSubsets(ans+str[0],str.substr(1),v);
    printSubsets(ans,str.substr(1),v);
}

int main() {
    string str = "abcd";
    vector <string> v;
    printSubsets("",str,v);

    for(string i: v) {
        cout << i << " ";
    }
    cout << endl;
}