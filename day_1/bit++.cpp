/*
    link: https://codeforces.com/problemset/problem/282/A
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    #endif

    int n; cin >> n;
    int value = 0;
    while(n--){
        string temp; cin >> temp; 
        if(temp.find('+') != string::npos) value++;
        else value--;
    }


    cout << value << endl;

    return 0;
}