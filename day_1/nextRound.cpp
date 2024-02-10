/*
    link: https://codeforces.com/problemset/problem/158/A
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    #endif

    int n, k;
    vector<int> nums;
    cin >> n >> k;
    while(n--){
        int temp; cin >> temp;
        nums.push_back(temp);
    } 

    int target = nums[k-1];
    int ans = 0;
    for(auto a : nums) (a >= target && a>0)?(ans++):0;

    cout << ans << endl;

    return 0;
}