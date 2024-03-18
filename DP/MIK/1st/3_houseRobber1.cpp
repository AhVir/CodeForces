#include<iostream>
#include<vector>

using namespace std;

/*  Brute Force(recursion)  */
int solve1(vector<int>& nums, int len, int i){
    if(i >= len) return 0;  //Already ARRAY out of bound 

    // Robbing the house
    int skip_value = solve1(nums, len, i+1);
    int rob_value = nums[i] + solve1(nums, len, i+2);

    return max(skip_value, rob_value);
}

int rob(vector<int>& nums) {
    int len = nums.size();

    return solve1(nums, len, 0);
}


/*  TopDown Recursive approach with MEMOIZATION  */
int solve2(vector<int>& nums, int len, int i, vector<int>& memo){
    if(i >= len) return 0;  //Already ARRAY out of bound 

    //Memoization Check
    if(memo[i] != -1) return memo[i];

    // Robbing the house
    int skip_value = solve2(nums, len, i+1, memo);
    memo[i+1] = skip_value;
    int rob_value = nums[i] + solve2(nums, len, i+2, memo);
    memo[i+2] = rob_value - nums[i];

    return max(skip_value, rob_value);
}

int rob2(vector<int>& nums) {
    int len = nums.size();
    vector<int> memo(100+1, -1);

    return solve2(nums, len, 0, memo);
}


int main(){
    vector<int> abc = {1,2,3,1};

    cout << rob(abc) << endl;

    return 0;
}