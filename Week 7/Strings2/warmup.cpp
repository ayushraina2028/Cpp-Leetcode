#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string str;

    cin >> str;

    int len = str.length();
    int count = 0;

    

    for(int i = 0;i < len;i++) {

        //edge case 1
        if(len == 1) count = 0;break;

        //edge case 2
        if(len == 2 && str[0] != str[1]) count = 1;break;

        // normal condition
        if(i == 0) {
            if(str[i] != str[i+1]) count++; 
        }

        else if (i == len-1) {
            if(str[i] != str[i-1]) count++;
        }

        else {
            if(str[i] != str[i-1] && str[i] != str[i+1]) count++;
        }
    }

    cout << count << endl;


}