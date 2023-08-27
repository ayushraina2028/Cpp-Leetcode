#include <iostream>
#include <algorithm>
#include <climits>
#include <vector>
using namespace std;

// Problem 2

void display(vector <int> v) {
    for(int i = 0; i < v.size();i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

int remove_val(vector <int> &v, int target) {
    int i = 0;
    int j = v.size() - 1;
    int k = v.size();

    while(i <= j) {

        if(v[i] == target) {
            swap(v[i], v[j]);
            j--;
            k--;

        }
        
        if(v[i] != target) {
            i++;
        }
    }
}

int main() {
    
    vector <int> v;
    cout << "Enter Size: " << endl;
    int n;
    cin >> n;

    for(int i = 0; i < n;i++) {
        cout << "Enter Element " << i+1 << endl;
        int x;
        cin >> x;
        v.push_back(x);
    }

    int target;
    cout << "Enter Target Value: " << endl;
    cin >> target;



    // function for displaying vector
    display(v);

    // solution(2 pointer algorithm)
    cout << "k = " << remove_val(v, target) << endl;

    // check array
    display(v);

}