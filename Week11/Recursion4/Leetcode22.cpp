#include <iostream>
#include <string>
#include <vector>
using namespace std;

void findWellOrderedParenthesis(vector <string> answer, int n) {
    // to be continued
}

int main() {
    // generate well ordered parenthesis combinations
    int n = 3;
    vector <string> answer;
    findWellOrderedParenthesis(answer,n);

    for(int i = 0;i < answer.size();i++) {
        cout << answer[i] << " ";
    }
    cout << endl;

}