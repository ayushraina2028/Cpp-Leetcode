#include <iostream>
#include <vector>
using namespace std;

void merge(vector <int> v1, vector <int> v2, vector <int>& v) {

    int i = 0;
    int j = 0;
    int k = 0;
    

    while(i < v1.size() && j < v2.size()) {
        if(v1[i] < v2[j]) {
            v[k++] = v1[i++];
        }
        else {
            v[k++] = v2[j++];
        }
    }

    if(i==v1.size()) {
        while(j < v2.size()) v[k++] = v2[j++];
    }
    else if(j==v1.size()) {
        while(i < v1.size()) v[k++] = v1[i++];
    }

}

void mergeSort(vector <int>& v) {
    int n = v.size();

    if(n==1) return;

    int n1 = n/2;
    int n2 = n-n1;

    vector <int> v1(n1);
    vector <int> v2(n2);

    for(int i = 0,j=0;i < n1,j < n2;i++,j++) {
        v1[i] = v[i];
        v2[j] = v[i+n1];
    }

    mergeSort(v1);
    mergeSort(v2);

    
    merge(v1,v2,v);

}

int main() {
    vector <int> arr = {4,6,7,4,2,5,7,8,4};
    for(int i = 0;i < arr.size();i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    mergeSort(arr);

    for(int i = 0;i < arr.size();i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}   