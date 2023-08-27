#include <iostream>
#include <climits>
using namespace std;

int main() {
    // Count the number of elements strictly greater than x.

    cout << "Enter number of elements" << endl;
    int n;
    cin >> n;
    
    int array[n];

    for(int i = 0;i < n;i++) {
        cout << "Enter element " << i+1 << endl;
        cin >> array[i];
    }   

    cout << "Entered array is: ";
    for (int i = 0;i < n; i++) {
        cout << array[i] << " ";
    }

    cout << endl;

    int x;
    cout << "Enter integer x" << endl;
    cin >> x;

    // Write your solution here 

    int count = 0;
    for(int i = 0;i < n;i++) {
        if (array[i] < x) {
            count++;
        }
    }
    cout << "No of Elements greater than x: " << count << endl;
}