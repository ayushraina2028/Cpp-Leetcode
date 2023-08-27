# include <iostream>
using namespace std;

int main() {
    // Find maximum value in array (Application of Linear Search)

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

    // for maximum
    int max = arr[0], min = arr[0];
    for (int i = 1;i < n;i++) {
        if (max < arr[i]) {
            max = arr[i];
        }
    }

    // for minimum
    for (int i = 1;i < n;i++) {
        if (min > arr[i]) {
            min = arr[i];
        }
    }

    cout << "Maximum value is: " << max << endl;
    cout << "Minimum value is: " << min << endl;



    
    
}