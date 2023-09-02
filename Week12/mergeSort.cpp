#include <iostream>
#include <vector>
using namespace std;

void merge(vector <int> a, vector <int> b, vector <int>& ans) {
    int i = 0;
    int j = 0;
    int k = 0;

    while(i < a.size() && j < b.size()) {
        if(a[i]<b[j]) {
            ans[k++]=a[i++];
        }
        else{
            ans[k++]=b[j++];
        }
    }

    if(i==a.size()) {
        while(j < b.size()) ans[k++] = b[j++];
    }
    else if(j==b.size()) {
        while(i < a.size()) ans[k++] = a[i++];
    }

}

// Merge Sort is a stable sort
void mergeSort(vector <int>& v) {
    int n=v.size();

    if(n==1) return;

    int n1 = n/2, n2 = n - n1;
    vector<int> a(n1),b(n2);

    // Copying Elements
    for(int i=0,j=0;i < n1,j < n2;i++,j++) {
        a[i] = v[i], b[j] = v[i+n1];
    }
    
    // Recursion
    mergeSort(a);
    mergeSort(b);
    
    // merge
    merge(a,b,v);

    // small improvement in space complexity
    a.clear();
    b.clear();
}

int main() {
    vector <int> v = {5,1,3,0,3,4,9,6};

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
}