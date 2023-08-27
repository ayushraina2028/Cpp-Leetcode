# include <iostream>
using namespace std;

// print first and last digit of a number without returning anything

// To store last digit
void last(int n, int* y) {
    *y = n % 10;
}

// To store first digit
void first(int n, int* y) {
    while (n/10 != 0) {
        n = n/10;
    }
    *y = n;
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    int first_digit, last_digit;

    // finding first digit
    first(n, &first_digit);

    // finding last digit
    last(n, &last_digit);

    // printing both digits
    cout << first_digit << " " << last_digit << endl;
}