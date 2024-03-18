#include<iostream>
#include<vector>
#include <climits>
using namespace std;

void solve(vector<int>& nums, int i, int n, int k) {
    if (i >= n) return;

    int maxVal = INT_MIN;
    int maxIndex = -1;

    for (int x = i; x < min(i + k, n); x++) {
        if (nums[x] > maxVal) {
            maxVal = nums[x];
            maxIndex = x;
        }
    }

    for (int a = i; a <= maxIndex; a++) {
        nums[a] = maxVal;
    }

    solve(nums, maxIndex + 1, n, k);
}



// void solve(vector<int>& nums, int i, int n, int k){
//     if(i>=n) return;

//     int max = -1; 

//     for(int x=i; x<i+k && x<n; x++){
//         if(nums[x] > max) max = nums[x];

//         for(int a = i; a<=x; a++){
//             nums[a] = max;
//         }
//     }
//     solve(nums, i+1, n, k);
// }

int maxSumAfterPartitioning(vector<int>& arr, int k) {
    int len = arr.size();

    solve(arr, 0, len, k);

    int maxSum = 0;
    for(auto a:arr){
        cout << a << ", ";
        maxSum += a;
    }
    cout << endl;

    return maxSum;
}

int main(){
    vector<int> nums = {1,15,7,9,2,5,10};
    int k = 3;
    
    cout << maxSumAfterPartitioning(nums, k) << endl;

    return 0;
}