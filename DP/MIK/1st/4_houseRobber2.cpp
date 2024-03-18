#include<iostream>
#include<vector>
using namespace std;

int houseRob1(vector<int>& num, int i, int n, vector<int>& memo){
    //Base Condition
    if(i>=n) return 0;

    //Memoization:
    if(memo[i] != -1) return memo[i];

    //Recursive Call
    int skip = houseRob1(num, i+1, n, memo);  //skipping this house
    memo[i+1] = skip;
    int steal = num[i] + houseRob1(num, i+2, n, memo); //stealing this current house
    memo[i+2] = steal - num[i];

    return max(skip, steal);
}

int rob(vector<int>& nums){
    int len = nums.size();
    vector<int> memo(105, -1);
    if(len == 1) return nums[0];
    return max(houseRob1(nums, 0, len-1, memo), houseRob1(nums, 1, len, memo));
}
 
int main(){
    vector<int> nums = {1,2,3};

    cout << rob(nums) << endl;

    return 0;
}