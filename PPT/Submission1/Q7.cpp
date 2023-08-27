#include <iostream>
#include <algorithm>
#include <climits>
#include <vector>
using namespace std;

// Problem 7

void display(vector <int> v) {
    for(int i = 0; i < v.size();i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

void bubble_sort(vector <int> &v, int target = 0) {
    int n = v.size();
    for(int j = 0;j < n;j++) {
        for(int i = 0; i < n-1;i++) {
        if(v[i] == 0) {
            swap(v[i], v[i+1]);
        }
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

    int target= 0;
    



    // function for displaying vector
    display(v);

    // solution(Bubble Sort Algoritm)
    bubble_sort(v, target);

    // check array
    display(v);

}