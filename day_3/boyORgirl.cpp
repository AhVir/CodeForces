/*
    link: https://codeforces.com/problemset/problem/236/A
*/


#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    #ifndef ONLINE_JUDGE
    freopen("../in.txt", "r", stdin);
    #endif

    string name; cin >> name;
    cout << name << endl;
    unordered_set<char> s;

    for(char a : name) s.insert(a);

    (s.size()%2 != 0)?(cout << "IGNORE HIM!" << endl):(cout << "CHAT WITH HER!" << endl);

    return 0;
}