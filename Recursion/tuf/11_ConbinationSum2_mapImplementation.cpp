#include<bits/stdc++.h>
using namespace std;

void solve(vector<int> &cand, int sum, int tar, int i, map<vector<int>, int> &m, vector<int> &temp){
    if(sum == tar){
        m.insert({temp, 0});
        return;
    }
    if(sum > tar) return;
    if(i >= cand.size()) return;

    //Take:
    temp.push_back(cand[i]);
    solve(cand, sum+cand[i], tar, i+1, m, temp);

    //Skip:
    temp.pop_back();
    solve(cand, sum, tar, i+1, m, temp);
}

vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
    map<vector<int>, int> m;
    vector<int> temp;
    vector< vector<int> > ans;
    sort(candidates.begin(), candidates.end());

    solve(candidates, 0, target, 0, m, temp);

    for(auto &i : m){
        ans.push_back(i.first);
    }

    return ans;
}
int main(){
    vector<int> cand = {10,1,2,7,6,1,5};
    int tar = 8;

    vector<vector<int>> temp = combinationSum2(cand, tar);

    return 0;
}