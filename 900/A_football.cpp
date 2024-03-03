/*
    link: https://codeforces.com/problemset/problem/96/A
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
#define chk cout <<"hi"<<endl

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    #ifndef ONLINE_JUDGE
    freopen("../in.txt", "r", stdin);
    #endif
    
    string s; cin >> s;
    int flag = 0;
    // for(int i=0; i<s.length(); i++){
    //     if(s[i] == '0'){
    //         int cnt = 0;
    //         int j=i;
    //         while(s[j] != '1' && j < s.length()) cnt++, j++;
    //         if(cnt >= 7){
    //             flag = 1;
    //             break;
    //         }
    //     }
    //     if(s[i] == '1'){
    //         int cnt = 0;
    //         int j=i;
    //         while(s[j] != '0' && j < s.length()) cnt++, j++;
    //         if(cnt >= 7){
    //             flag = 1;
    //             break;
    //         }
    //     }
    // }

    //Approach 02:
    int curSame = 1, maxSame = 0;
    for(int i=1; i<s.length(); i++){
        if(s[i] == s[i-1]){
            curSame++;
        }
        else{
            maxSame = max(maxSame, curSame);
            curSame = 1;
        }
    }

    maxSame = max(maxSame, curSame);
    // pr(maxSame);

    (maxSame >= 7)?(cout << "YES" << endl):(cout << "NO" << endl);
    return 0;
}