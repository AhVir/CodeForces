#include<bits/stdc++.h>
using namespace std;

struct hashFunction 
      {
         size_t operator()(const vector<int> &myVector) const 
         {
             std::hash<int> hasher;
             size_t answer = 0;
             for (int i : myVector) 
            {
                answer ^= hasher(i) + 0x9e3779b9 + 
                                  (answer << 6) + (answer >> 2);
           }
           return answer;
       }
};

void solution(vector<int>& cand, int tar, int sum, int i, unordered_set< vector<int>, hashFunction >& s, vector<int>& temp){
    //base case:
    if(sum == tar){
        s.insert(temp);
        return;
    }
    
    if(sum > tar) return;
    if(i >= cand.size()) return;


    //recursive calls:
    //take
    temp.push_back(cand[i]);
    solution(cand, tar, sum+cand[i], i+1, s, temp);

    //skip
    temp.pop_back();
    solution(cand, tar, sum, i+1, s, temp);
}

vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
    unordered_set< vector<int>, hashFunction > set;
    vector< vector<int> > ans;
    vector<int> temp;

    sort(candidates.begin(), candidates.end());

    solution(candidates, target, 0, 0, set, temp);

    for(auto &i : set){
        for(auto &a : i) cout << a << " ";
        cout << endl;
    }

    for(auto &i : set){
        ans.push_back(i);
    }

    cout << ans.size() << endl;

    return ans;
}

int main(){
    vector<int> temp = {2,5,2,1,2};
    int target = 5;

    combinationSum2(temp, target);

    return 0;
}