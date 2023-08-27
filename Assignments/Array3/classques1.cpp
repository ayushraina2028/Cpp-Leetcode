#include <iostream>
#include <algorithm>
#include <climits>
#include <vector>
using namespace std;

void bring_negatives(vector <int> &v) {
    int i = 0;
    int j = v.size() - 1;

    for(i, j;i <= j;i++, j--) {
        if (v[i] < 0) i++; 
        if (v[j] > 0) j--;

        if(v[i] > 0 && v[j] < 0) {
            if(i < j) {
                swap(v[i], v[j]);
            }
        }
    }
}


void display(vector <int> v) {
    for(int i = 0; i < v.size();i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main() {
    
    vector <int> v;
    v.push_back(1);
    v.push_back(8);
    v.push_back(3);
    v.push_back(6);
    v.push_back(-5);
    v.push_back(-6);
    v.push_back(-7);
    v.push_back(-8);


    display(v);


    // move -ve numbers to beginning and positive to end
    // simple application of 2 pointer method

    bring_negatives(v);
    display(v);
}