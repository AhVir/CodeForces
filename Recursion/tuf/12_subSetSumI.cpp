#include<bits/stdc++.h>
using namespace std;

void solve(vector<int>& input, vector<int>& temp, int i, int n, vector<int>& ans){
    if(i >= n){
        int sum = 0;    
        for(auto &a : temp){
            sum += a;
        }
        ans.push_back(sum);
        return;
    }

    //skip:
    solve(input, temp, i+1, n, ans);

    //take:
    temp.push_back(input[i]);
    solve(input, temp, i+1, n, ans);
    temp.pop_back();

}

vector<int> subsetSums(vector<int> arr, int N){
    vector<int> temp;
    vector<int> ans;

    solve(arr, temp, 0, N, ans);

    // for(int &x : ans) cout << x << " ";
    // cout << endl;

    return ans;
}

int main(){
    vector<int> input = {5, 2, 1};
    int n = 3;
   
    subsetSums(input, n);

    return 0;
}