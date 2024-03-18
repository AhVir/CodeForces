#include<bits/stdc++.h>
using namespace std;

int solve(vector<int>& arr, int idx, int k){
    if(idx >= arr.size()) return 0;

    int res = 0;
    int cur_max = -1;

    for(int i=idx; i<arr.size() && i-idx+1 <= k; i++){
        cur_max = max(cur_max, arr[i]);

        res = max(res, cur_max*(i-idx+1) + solve(arr, i+1, k));
    }

    return res;
}

int maxSumAfterPartitioning(vector<int>& nums, int k){
    return solve(nums, 0, k);
}

int main(){
    vector<int> n = {1,15,7,9,2,5,10};
    int k = 3;

    cout << maxSumAfterPartitioning(n, k) << endl;

    return 0;
}