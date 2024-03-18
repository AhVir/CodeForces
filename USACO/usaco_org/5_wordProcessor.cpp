/*
    link: https://usaco.org/index.php?page=viewproblem2&cpid=987
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("word.in", "r", stdin);
    freopen("word.out", "w", stdout);

    int n, k; cin >> n >> k;
    int len = 0;
    for(int i=0; i<n; i++){
        string word; cin >> word;
        len += word.length();
        if(len <= k){
            if(i!=0){cout << " ";}
            cout << word;
        }
        else{
            cout << "\n";
            cout << word;
            len = word.length();
        }
    }


    return 0;
}