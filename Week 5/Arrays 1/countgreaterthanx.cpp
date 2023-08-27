# include <iostream>
using namespace std;

int main() {
    // Count the number of elements greater than x in given array

    // number of elements
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    // Taking array input
    int arr[n];
    for (int i = 0; i < n;i++) {
        cout << "Enter element " << i+1 << " : ";
        cin >> arr[i];
    }

    // Element x
    int x;
    cout << "Enter x: ";
    cin >> x;
    
    // number of elements greater than x
    int num = 0;

    // Linear Search
    for (int i = 0; i < n;i++) {
        if (arr[i] > x) {
            num++;
        }
        
    }
    
    // print array
    cout << "Entered array: ";

    for (int i = 0;i < n;i++) {
        cout << arr[i] << " ";
    }

    cout << endl;

    // check answer
    cout << "The number of elements greater than x is: " << num << endl;

   
}