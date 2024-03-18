#include<iostream>
#include<vector>
using namespace std;

/*
    https://leetcode.com/problems/climbing-stairs/description/
*/

int count = 0;

//Recursion without Memoization
void climb(int i, int n, int save){
    // cout << "save -> " << save << ", " << n << ", ";
    //Base Conditions
    if(i > n) return;
    if(n == i){
        save++;
        // cout << save << ", " << endl;
        return;
    }

    //1 step 
    climb(i+1, n, save);

    //2 step
    climb(i+2, n, save);
}

int climbStairs(int n) {
    int save = 0;
    climb(0, n, save);

    return save;
}

//With Memoization
void climb_Memo(int i, int n, int& save, vector<int> memo){
    //Base Conditions
    if(i > n) return;
    if(n == i){
        save++;
        memo[i] = save;
        return;
    }

    if(memo.at(i) != -1){
        save = save + memo.at(i);
        return;
    } 

    //1 step 
    climb_Memo(i+1, n, save, memo);
    memo[i+1] = save;

    //2 step
    climb_Memo(i+2, n, save, memo);
    memo[i+2] = save;
}

int climbStairs_Memo(int n) {
    vector<int> memo(n+1, -1);

    int save = 0;
    climb_Memo(0, n, save, memo);

    return save;
}


/*Top To Bottom Recursion Approach*/
//with memoization


int solve(int n, vector<int>& memo2) {
        if(n < 0) return 0;
        if(n == 0){
            return 1;
        }

        if(memo2[n] != -1) return memo2[n];

        int oneStep = solve(n-1, memo2);
        int twoStep = solve(n-2, memo2);

        return memo2[n] = oneStep + twoStep;
}

int climbStairs_Buttom(int n){
    vector<int> memo2(46, -1);
    return solve(n, memo2);
}


//Button Up Approach:   Space Complexity -> O(N)

int climbStairs_ButtomUp(int n){
    vector<int> res(n+1, -1);
    res[0] = 0;
    res[1] = 1;
    res[2] = 2;

    if(res[n] != -1) return res[n];

    for(int i=3; i<=n; i++){
        res[i] = res[i-1] + res[i-2];
    }
    return res[n];
}

//Button Up approach: Space Complexity -> O(1)

int climbStairs_ButtomUp_Opmized(int n){
    if(n == 0 || n == 1 || n == 2) return n;

    int a = 1; 
    int b = 2;

    for(int i=1; i<n-1; i++){
        b = a + b;
        a = b - a;
    }

    return b;
}

/*   Main Function     */

int main(){

    cout << climbStairs_ButtomUp_Opmized(5) << endl;

    return 0; 
}