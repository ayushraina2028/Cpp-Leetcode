#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

int main() {
    // find second minimum element in one pass

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

    int fmax = max(array[0], array[1]);
    int smax = min(array[0], array[1]);

    for(int i = 2;i < n;i++) {
        if(fmax < array[i]) {
            smax = fmax;
            fmax = array[i];
        }
        else {
            if(smax < array[i]) {
                smax = array[i];
            }
        }
    }  

    cout << "Second largest element is: " << smax << endl;

}