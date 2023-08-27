#include <iostream>
#include <algorithm>
#include <climits>
#include <vector>
using namespace std;

void reverse_part_for_loop(vector <int> &v, int i, int j) {
    for (i,j;i <= j;i++, j--) {
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
    }
}

void reverse_part_while_loop(vector <int> &v, int i, int j) {
    while (i <= j) {
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
        i++;
        j--;
    }
}

void reverse_for_loop(vector <int> &v) {
    for(int i = 0, j = v.size() - 1; i <= j; i++, j--) {
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
    }
}

void reverse_while_loop(vector <int> &v) {
    int i = 0;
    int j = v.size() - 1;

    while(i <= j) {
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
        i++;
        j--;
    }
}

void display(vector <int> v) {
    for(int i = 0; i < v.size();i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main() {
    // Reverse the array by 2 pointer method
    // use vectors please and pass to functions

    vector <int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    v.push_back(7);
    v.push_back(8);

    // function for displaying vector
    display(v);

    // reverse using for loop
    reverse_for_loop(v);
    display(v);

    // reverse using while loop
    reverse_while_loop(v);
    display(v);

    // reverse part of array using for loop
    reverse_part_for_loop(v, 2, 5);
    display(v);

    // reverse part of array using while loop
    reverse_part_while_loop(v, 2, 5);
    display(v);
}