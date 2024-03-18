#include<bits/stdc++.h>
using namespace std;

void solution(vector<int>& cand, int target, int i, vector< vector<int> >& ans, vector<int> temp){
    if(target == 0){
        ans.push_back(temp);
        return;
    }

    for(int x = i; x<cand.size(); x++){
        if(x > i && cand[x] == cand[x-1]) continue;
        if(cand[x] > target) break;

        temp.push_back(cand[x]);
        solution(cand, target-cand[x], x+1, ans, temp);
        temp.pop_back();
    }


    // if (target == 0) {
    //     ans.push_back(temp);
    //     return;
    // }
    // for (int x = i; i < cand.size(); i++) {
    //     if (x > i && cand[x] == cand[x - 1]) continue;
    //     if (cand[x] > target) break;
    //     temp.push_back(cand[x]);
    //     solution(cand, target - cand[x], x+1, ans, temp);
    //     ds.pop_back();
    // }
}

vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
    vector< vector<int> > ans;
    vector<int> temp;

    sort(candidates.begin(), candidates.end());
    solution(candidates, target, 0, ans, temp);

    cout << "Size -> " << ans.size() << endl;

    return ans;
}

int main(){
    vector<int> temp = {10,1,2,7,6,1,5};
    int target = 8;

    combinationSum2(temp, target);

    return 0;
}