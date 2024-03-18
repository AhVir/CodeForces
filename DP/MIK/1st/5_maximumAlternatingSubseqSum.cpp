#include<iostream>
#include<vector>
#include <string.h>
using namespace std;

/*
    link: https://leetcode.com/problems/maximum-alternating-subsequence-sum/description/
*/


typedef long long ll;
ll memo[100005][2];

//Just Recursion, no memoization:

// int solve(vector<int>& nums, int i, int n, bool isTaken){
//     if(i >= n) return 0;
//     int element = nums[i];

//     if(isTaken == false){
//         element *= -1;
//     }

//     //Take
//     int take = element + solve(nums, i+1, n, !isTaken);
//     int skip = solve(nums, i+1, n, isTaken);

//     return max(take, skip);
// }

// long long maxAlternatingSum(vector<int>& nums){
//     int len = nums.size();

//     return solve(nums, 0, len, true);
// }


//Recursion with Memoization:

ll solve(vector<int>& nums, int i, int n, bool isTaken, ll memo[][2]){
    if(i >= n) return 0;
    ll element = nums[i];

    if(isTaken == false){
        element *= -1;
    }

    //Memoization:
    if(memo[i][isTaken] != -1) return memo[i][isTaken];

    //Take
    ll take = element + solve(nums, i+1, n, !isTaken, memo);
    memo[i+1][!isTaken] = take - element;
    //Skip
    ll skip = solve(nums, i+1, n, isTaken, memo);
    memo[i+1][isTaken] = skip;

    return max(take, skip);
}

long long maxAlternatingSum(vector<int>& nums){
    int len = nums.size();
    memset(memo, -1, sizeof(memo));

    return solve(nums, 0, len, true, memo);
}

int main(){
    vector<int> nums = {4,2,5,3};

    cout << maxAlternatingSum(nums) << endl;

    return 0;
}



//My initial Approach:

// long long alternatingSum(vector<long long>& cur){
//     long long even = 0, odd = 0;
//     for(int i=0; i<cur.size(); i++){
//         if(i%2 == 0) even += cur[i];
//         if(i%2 != 0) odd += cur[i];
//     }

//     return even - odd;
// }

// long long subSequence(vector<int>& n, int i, int len, vector<long long>& cur, vector<long long>& memo){
//     //Base Case:
//     if(i > len) return 0;
//     if(i == len){

//         return alternatingSum(cur);
//     } 

//     //Memoization:
//     if(memo[i] != -1) return memo[i];

//     //Recursive Call:
//     //Picking this element
//     cur.push_back(n[i]);
//     long long pick = subSequence(n, i+1, len, cur, memo);
//     memo[i] = pick;

//     //Not picking this element
//     cur.pop_back();  //removing that added element
//     long long pop = subSequence(n, i+1, len, cur, memo);
//     memo[i] = pop;

//     return max(pick, pop);
// }

// long long maxAlternatingSum(vector<int>& nums){
//     vector<long long> pick;
//     vector<long long> memo(10e5+5, -1);
//     return subSequence(nums, 0, nums.size(), pick, memo);
// }

// int main(){
//     vector<int> nums = {5,6,7,8};

//     cout << maxAlternatingSum(nums) << endl;

//     return 0;
// }