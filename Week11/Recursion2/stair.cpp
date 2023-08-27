#include <iostream>
#include <climits>
#include <math.h>
using namespace std;

int stairThreeJumps(int n) {
    if(n == 1) return 1;
    if(n == 2) return 2;
    if(n == 3) return 4;

    return stairThreeJumps(n-1) + stairThreeJumps(n-2) + stairThreeJumps(n-3);
}

int stair(int n) {
    if(n==2) return 2;
    if(n==1) return 1;

    return stair(n-1)+stair(n-2);
}

int main() {
    cout << stair(5) << endl;

    cout << stairThreeJumps(5) << endl;
}