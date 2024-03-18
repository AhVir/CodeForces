/*
    link: https://usaco.org/index.php?page=viewproblem2&cpid=1059
*/

#include<bits/stdc++.h>
using namespace std;

#define int long long

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> abc;
    for(int i=0; i<7; i++){
        int temp; cin >> temp;
        abc.emplace_back(temp);
    }

    sort(abc.begin(), abc.end());

    int a = abc[0], b = abc[1];
    int c = abc[6] - (a+b);

    cout << a << " " << b << " " << c << endl;

    return 0;
}