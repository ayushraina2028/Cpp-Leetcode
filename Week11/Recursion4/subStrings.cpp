#include <iostream>
#include <vector>
#include <string>

using namespace std;

void printSubStrings(string ans, string str) {

    int len = str.length();
    if(ans!="") {
        cout << ans << endl;
    }
    if(str != "") {    
        printSubStrings(ans+str[0],str.substr(1));
    }
    else {
        if(ans.substr(1)=="") return;
        printSubStrings("",ans.substr(1));
    }
}

int main() {
    // Find all sub arrays
    // Remember subset, subsequence and subarray are different things

    string str = "123";
    printSubStrings("",str);
    
}