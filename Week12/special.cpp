#include <iostream>
#include <vector>
using namespace std;

void merge(vector <int> a, vector <int> b,vector <int> c, vector <int> d, vector <int>& ans) {
    
    for(int i = 0; i < a.size();i++) {
        if(a[i] == -1) {
            for(int j = 0;j < b.size();j++) {
                if(c[i] < d[j]) {
                    ans[i] = a.size()+j;
                    break;
                }
                else{
                    ans[i] = -1;
                }
            }
        }
        else {
            ans[i] = a[i];
        }
    }
    for(int j = 0;j < b.size();j++) {
        if(b[j] != -1) {
            ans[a.size()+j] = b[j]+a.size();
        }
        else {
            ans[a.size()+j] = b[j];
        }
    }
}

// Merge Sort is a stable sort
void mergeSort(vector <int>& v) {
    int n=v.size();
    if(n==1) {
        v[0]=-1;
        return;
    }

    int n1 = n/2, n2 = n - n1;
    vector<int> a(n1),b(n2),c(n1),d(n2);

    // Copying Elements
    for(int i=0,j=0;i < n1,j < n2;i++,j++) {
        a[i] = v[i], b[j] = v[i+n1],c[i] = v[i],d[i] = v[i+n1];
    }
    
    // Recursion
    mergeSort(a);
    mergeSort(b);

    for(auto ele : v) {
        cout << " " << ele << " ";
    }
    for(auto ea : a) {
        cout << "a : " << ea << " ";
    }
    for(auto eb : b) {
        cout << "b : " << eb << " ";
    }
    cout << endl;
    // merge
    merge(a,b,c,d,v);

    
}

int main() {
    // Problem 15 Assignment 3
    vector <int> v = {10,3,5,1,2,15,8,6,12};
    vector <int> v1 = v;

    cout << "Before Sorting" << endl;
    for(int i = 0;i < v.size();i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    mergeSort(v);
    
    cout << "After Sorting" << endl;
    for(int i = 0;i < v.size();i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    int n = v.size();
    int max = 0;
    int idx = -1;
    for(int i = 0;i < v.size();i++) {
        int temp;
        if(v[i] == -1) {
            temp = n-i;
        }
        else {
            temp = v[i]-i;
        }
        if(max < temp) {
            max = temp;
            idx = i;
        }
    }

    if(v[idx]==-1) {
        cout << " answer is: " << v1[idx] << " -> " << v1[v.size()-1] << endl;
    }
    else {
        cout << " answer is: " << v1[idx] << " -> " << v1[v[idx]] << endl;
    }
    
}