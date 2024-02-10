/*
    linK: https://codeforces.com/problemset/problem/71/A
*/


#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    #endif

    int q; cin >> q;
    while(q--){
        string temp; cin >> temp;
        if(temp.size()>10){
            cout << temp[0] << temp.size()-2 << temp[temp.size()-1] << endl;
        }
        else{
            cout << temp << endl;
        }
    }

    return 0;
}