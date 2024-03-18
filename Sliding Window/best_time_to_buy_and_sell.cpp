/*
Description:

https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/
    2 pointer problem
    From "Google" Interview
*/

#include<bits/stdc++.h>
using namespace std;

int maxProfit(vector<int>& prices);

int main(){
    // vector<int> prices = {7,1,5,3,6,4};
    vector<int> prices = {7,6,4,3,1};
    cout << maxProfit(prices) << endl;

    return 0;
}


int maxProfit(vector<int>& prices){
    int n = prices.size();

    int l = 0, r = 1;
    int profit = INT_MIN;
    while(r<n){
        if(prices[l]>prices[r]){
            l = r;
            r++;
        }
        else{
            int curProfit = prices[r]-prices[l];
            if(curProfit>profit){
                profit = curProfit;
            }
            r++;
        }
    }
    if(profit>0) return profit;
    else return 0;
}