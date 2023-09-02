#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector <string> findWellOrderedParenthesis(vector <string>& answer,int open,int close, int n,string str) {
    // starting from beginning, at any point opening bracked >= closing bracket
    if(open == n && close == n) {
        answer.push_back(str);
        return answer;
    }

    if(open < close) return answer;

    if(open < n) {
        findWellOrderedParenthesis(answer,open+1,close,n,str+'(');
        findWellOrderedParenthesis(answer,open,close+1,n,str+')');
    }
    else if(open == n) {
        findWellOrderedParenthesis(answer,open,close+1,n,str+')');
    }
    else if(close == open && close < n) {
        findWellOrderedParenthesis(answer,open+1,close,n,str+'(');
    }
    
    return answer;

    /*
    if(open < n)  findWellOrderedParenthesis(answer,open+1,close,n,str+'(');
    if(close < open)  findWellOrderedParenthesis(answer,open,close+1,n,str+')');
    done
    */
    
}

int main() {
    // generate well ordered parenthesis combinations
    int n = 5;
    vector <string> answer;
    findWellOrderedParenthesis(answer,0,0,n,"");  // Very Bad Time and Space Complexity.

    for(int i = 0;i < answer.size();i++) {
        cout << answer[i] << " ";
    }
    cout << endl;

}