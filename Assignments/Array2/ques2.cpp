#include <iostream>
#include <climits>
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

    // Write your solution here

    int fmax = array[0];
    int smax = array[1];
    int tmax = array[2];

    if (fmax < smax) {
        swap(fmax, smax);
    }

    if (fmax < tmax) {
        swap(fmax,tmax);
    }

    if (smax < tmax) {
        swap(smax, tmax);
    }

    for (int i = 3; i < n;i++) {
        if (fmax < array[i]) {
            tmax = smax;
            smax = fmax;
            fmax = array[i];
        }
        else {
            if (smax < array[i]) {
                tmax = smax;
                smax = array[i];
            }
            else {
                if(tmax < array[i]) {
                    tmax = array[i];   
                }
            }
        }
    }

    cout << "Largest 3 elements are: " << tmax << " " << smax << " " << fmax << endl;

}