#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <sstream>

using namespace std;

int main() {

    // count number of most occuring words in a sentence
    string str = "ayush raina is a college student. His college name is IISC which situated in Bengaluru";

    
    stringstream ss(str);
    string temp;
    vector <string> v;

    while(ss >> temp) {
        v.push_back(temp);
    }

    // now words are there in vector and
    // we did sort and same words are there together

    sort(v.begin(), v.end());
    int count = 1;
    int maxcount = 1;


    // finding maxcount
    for(int i = 1; i < v.size(); i++) {
        if(v[i] == v[i-1]) count++;
        else count = 1;

        if(maxcount < count) maxcount = count;
    }


    // printing words and maxcount
    count = 1;
    for(int i = 1; i < v.size(); i++) {
        if(v[i] == v[i-1]) count++;
        else count = 1;

        if(maxcount == count) cout << v[i] << " " << maxcount << endl;
    }
}