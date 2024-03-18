#include<bits/stdc++.h>
using namespace std;

void solve(vector<int>& cand, int i, int tar, int sum, vector<vector<int>>& all, vector<int>& temp){
    //Base Case:
    if(sum == tar){
        all.push_back(temp);
        return;
    }

    if(i >= cand.size()){
        return;
    }

    if(sum > tar){ 
        return;
    }

    //Recursive Call
    //single multiple
    temp.push_back(cand[i]);
    solve(cand, i, tar, sum+cand[i], all, temp);

    //skip
    temp.pop_back();
    solve(cand, i+1, tar, sum, all, temp);
}

vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
    vector<vector<int>> all;
    vector<int> temp;
    int i = 0;

    solve(candidates, i, target, 0, all, temp);

    for(auto a : all){
        for(auto b : a){
            cout << b << ", ";
        }
        cout << endl;
    }

    cout << all.size() << endl;

    return all;
}

int main(){
    vector<int> temp = {2, 3,6,7};
    int tar = 7; 

    combinationSum(temp, tar);

    return 0;
}