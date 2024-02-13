/*
    link: https://codeforces.com/problemset/problem/268/A 
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    #ifndef ONLINE_JUDGE
    freopen("../in.txt", "r", stdin);
    #endif

    int n; cin >> n;
    vector<pair<int, int>> teams;

    int i = n;
    while(i--){
        pair<int, int> temp;
        cin >> temp.first >> temp.second;
        teams.push_back(temp);
    }
    int count = 0;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(j==i) continue;
            if(teams[i].first == teams[j].second) count++;
        }
    }
    cout << count << endl;

    return 0;
}