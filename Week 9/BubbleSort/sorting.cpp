#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector <int> v(5);
    for(int i = 0;i < 5;i++) {
        cin >> v[i];
    }

    // our normal sort function has Time complexity as n*log(n)
    sort(v.begin(), v.end());
    for(int i = 0; i < 5;i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    // to print in reverse order 
    reverse(v.begin(), v.end());
    for(int i = 0; i < 5;i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}