#include<bits/stdc++.h>
using namespace std;


/*
    link: https://leetcode.com/problems/divide-array-into-arrays-with-max-difference/description/
*/

vector<vector<int>> divideArray(vector<int>& nums, int k) {
        //sorting the vector
        sort(nums.begin(), nums.end());

        vector<vector<int>> ans;

        for(int i=0; i<nums.size(); i++){
            // vector<int> temp;
            if(nums[i+2] - nums[i] > k) return {};
            // temp.push_back(nums[i]);
            // temp.push_back(nums[++i]);
            // temp.push_back(nums[++i]);

            // if(temp[2]-temp[0] <= k) ans.push_back(temp);
            ans.push_back({nums[i], nums[i+1], nums[i+2]});
            i += 2;
        }

        // if(ans.size() != nums.size()/3 ){
        //     ans.clear();
        //     return ans;
        // }
        return ans;
}

int main(){
    vector<int> nums = {1,3,4,8,7,9,3,5,1};
    int k = 2;

    vector<vector<int>> ans = divideArray(nums, k);
    

    for(auto a : ans){
        for(int b:a){
            cout << b << ", ";
        }
        cout << endl;
    }

    return 0;
}