/*
    link: https://codeforces.com/problemset/problem/59/A 
*/

#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define pri pair<int, int>
#define pr(x) cout<<#x<<"="<<x<<endl
#define prd(x) cout<<x<<" "
#define brk cout<<endl
#define pp(x) cout <<x<<endl
#define ps(x) cout <<#x<<endl

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    #ifndef ONLINE_JUDGE
    freopen("../in.txt", "r", stdin);
    #endif

    // cout << (int)('A') << ", " << (int)('Z') << endl;
    // cout << (int)('a') << ", " << (int)('z') << endl;

    string s; cin >> s;
    int cap = 0, small = 0;
    for(int i=0; i<s.size(); i++){
        int temp = (int)(s[i]);
        if(temp >= 65 && temp <= 90) cap++; 
        else small++;
    }

    if(cap > small){
        for(int i=0; i<s.size(); i++){
            int temp = (int)(s[i]);
            if(temp >= 97 && temp <= 122) s[i] -= 32;
        }
        cout << s << endl;
    }
    else if(small > cap){
        for(int i=0; i<s.size(); i++){
            int temp = (int)(s[i]);
            if(temp >= 65 && temp <= 90) s[i] += 32;
        }
        cout << s << endl;
    }
    else{
        for(int i=0; i<s.size(); i++){
            int temp = (int)(s[i]);
            if(temp >= 65 && temp <= 90) s[i] += 32;
        }
        cout << s << endl;
    }

    return 0;
}