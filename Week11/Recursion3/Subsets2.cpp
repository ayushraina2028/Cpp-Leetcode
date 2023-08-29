#include <iostream>
#include <vector> 

using namespace std;

void printSubsets(vector <int>& arr, int n, int idx, vector <int> answer) {
    
    if(idx==n){
        for(int i: answer) {
            cout << i << " ";
        }
        cout << endl;
        return;
    }
    printSubsets(arr,n,idx+1,answer);
    answer.push_back(arr[idx]);
    printSubsets(arr,n,idx+1,answer);
}

int main() {
    vector <int> arr = {1,2,3,4};
    vector <int> v;
    int n = 4;
    int i = 0;
    printSubsets(arr,n,i,v);

    
}