/*
    link: https://codeforces.com/problemset/problem/750/A
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    #endif

    int totalTime = 4 * 60;
    int prob; cin >> prob;
    int dist; cin >> dist;
    int remain = totalTime - dist;

    // cout << remain << endl;

    int prob1 = 5;
    int ans = 0;
    int spend = 0;

    for(int i=1; spend <= remain; i++){
        if(prob == ans) break;
        int temp = i*prob1;
        if((spend + (i*prob1)) > remain) break;
        else spend += (i*prob1);
        ans++;
    }

    // cout << spend << endl;
    cout << ans << endl;

    return 0;
}