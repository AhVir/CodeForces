/*
    link: 
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
#define int long long

int pinBall(string& s, int i, int n){
    //base case:
    if(i < 0 || i >= n){
        return 0;
    }

    // pr(s);

    //recursive call:
    if(s[i] == '<'){
        s[i] = '>';
        return 1 + pinBall(s, i-1, n);
    }
    else{
        s[i] = '<';
        return 1 + pinBall(s, i+1, n);
    }
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    #ifndef ONLINE_JUDGE
    freopen("../in.txt", "r", stdin);
    #endif
    
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string temp; cin >> temp;
        string s = temp;
        
        for(int i=0; i<n; i++){
            s = temp;
            cout << pinBall(s, i, n) << " ";
        }
        cout << endl;
    }

    return 0;
}