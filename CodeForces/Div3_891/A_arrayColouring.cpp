/*
    link: https://codeforces.com/contest/1857/problem/A
*/

#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define pri pair<int, int>
#define pr(x) cout<<#x<<"="<<x<<endl
#define prd(x) cout<<x<<" "
#define pp(x) cout <<x<<endl
#define ps(x) cout <<#x<<endl

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    #ifndef ONLINE_JUDGE
    freopen("../in.txt", "r", stdin);
    #endif

    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int ar[n];

        int odd = 0, even = 0;    
        for(int i=0; i<n; i++){
            int temp; cin >> temp;
            ar[i] = temp;
            if(temp%2 == 0) even++;
            else odd++;
        }
        // pr(even); pr(odd);

        if(odd%2 == 0) cout << "Yes" << endl;
        else cout << "No" << endl;
    }

    return 0;
}