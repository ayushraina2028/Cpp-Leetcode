#include <iostream>
#include <algorithm>
#include <climits>
#include <vector>
using namespace std;

// Problem 8

void display(vector <int> v) {
    for(int i = 0; i < v.size();i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

int find_duplicates(vector<int> &v) {

    int twice_occur = -1;
    int correct_occur = -1;
    int n = v.size() -1;
    for(int i = 0;i < n;i++) {
        if(v[i+1] != v[i] + 1) {
            return i;
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

    // solution(find hot_index)
    int hot_index = find_duplicates(v);
    int arr[2] = {v[hot_index+1], v[hot_index] + 1};
    
    cout << "[ ";
    for(int i = 0;i < sizeof(arr)/sizeof(arr[0]);i++) {
        cout << arr[i] << " ";
    }

    cout << "]";

    cout << endl;
    

}