# include <iostream>
using namespace std;

int main() {

    /* suppose int i = 2*3/4, in maths answer are same if we divide or multiply first but here not
     bcoz int is there  if we do multiply first then 6/4 = 1 and if divide first 3/4 = 0 (different) */

    // Multiplication and division have same hierarchy (preference)
    // Proceed Left to right

    //ques
    int num1;
    int p =5, q = 10; // Here it is solved right to left
    p += q -= p;
    cout << p << " " << q << endl;



}