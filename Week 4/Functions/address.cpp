# include <iostream>
using namespace std;


// hence copy of arguments is passed to this function not actual
// these are formal parameters
void fun(int x, int y) {
   cout << &x << " " << &y << endl;
}

// scope of variables is in respective functions only if not declared globally


int main() {

    // actual parameters
   int x = 3;
   int y = 7;

   // just check that actual parameters are never sent
   cout << &x << " " << &y << endl;
   fun(x,y);

    // but there are ways to send actual also


}