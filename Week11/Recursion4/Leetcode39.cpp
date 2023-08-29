#include <iostream>
#include <vector>
using namespace std;

vector <vector <int>> combinationSum2(vector <int> candidates, int target, vector <int> answer, vector <vector <int>>& finalAnswer,int idx) {
    // Call sirf apne se aage walo ko lagayege
    if(target == 0) {
        finalAnswer.push_back(answer);
        return finalAnswer;
    }

    if(target < 0) return finalAnswer;

    for(int i = idx;i < candidates.size();i++) {
        answer.push_back(candidates[i]);
        combinationSum2(candidates,target-candidates[i],answer,finalAnswer,i);
        answer.pop_back();
    }

    return finalAnswer;
}

vector <vector <int>> combinationSum1(vector <int> candidates, int target,vector <int> answer, vector <vector <int>>& finalAnswer) {
    // Check all possibilities, 
    if(target == 0) {
        finalAnswer.push_back(answer);
        return finalAnswer;
    }

    if(target < 0) return finalAnswer;

    for(int i=0;i < candidates.size();i++) {
        answer.push_back(candidates[i]);
        combinationSum1(candidates,target-candidates[i],answer,finalAnswer);
        answer.pop_back();
    }
    
    return finalAnswer;
}

int main() {
    vector <int> candidates = {2,3,5};
    int target = 8;
    vector <int> answer;

    // Brute Force Check All possibilities
    vector <vector <int>> finalAnswer1;
    combinationSum1(candidates,target,answer,finalAnswer1);
    cout << "Output from Combination Sum 1" << endl;
    for(int i = 0; i < finalAnswer1.size();i++) {
        for(int j = 0; j < finalAnswer1[i].size();j++) {
            cout << finalAnswer1[i][j] << " ";
        }
        cout << endl;
    }


    // Now removing duplicates from out put of previous One
    vector <vector <int>> finalAnswer2;
    combinationSum2(candidates,target,answer,finalAnswer2,0);
    cout << "Output from Combination Sum II" << endl;
    for(int i = 0; i < finalAnswer2.size();i++) {
        for(int j = 0; j < finalAnswer2[i].size();j++) {
            cout << finalAnswer2[i][j] << " ";  // Perfect.
        }
        cout << endl;
    }
}