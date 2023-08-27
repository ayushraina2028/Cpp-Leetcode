# include <iostream>
using namespace std;

int main() {

    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    
    // Taking input
    int arr[n];
    for (int i = 0; i < n;i++) {
        cout << "Enter element " << i+1 << " : ";
        cin >> arr[i];
    }

    // sum variable
    int sum = 0;

    // looping to make sum
    for (int i = 0; i < n;i++) {
        sum += arr[i];
    }  
    
    // check
    cout << "Sum of all elements is: " << sum << endl;

}