#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define pri pair<int, int>
#define pr(x) cout<<#x<<"="<<x<<endl
#define prd(x) cout<<x<<" "
#define pp(x) cout <<x<<endl
#define ps(x) cout <<#x<<endl

int memo[1005][1005];

int knapSackDP(int wt[], int profit[], int w, int n){
    if(n == 0 || w == 0) return 0;

    //memoization:
    if(memo[w][n] != -1) return memo[w][n];

    int val1 = 0, val2 = 0;
    if(wt[n-1] <= w){
        val1 = profit[n-1] + knapSackDP(wt, profit, w-wt[n-1], n-1);
        val2 = knapSackDP(wt, profit, w, n-1);

        return max(val1, val2);
    }
    else val2 = knapSackDP(wt, profit, w, n-1);

    return memo[w][n] = max(val1, val2);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    #ifndef ONLINE_JUDGE
    freopen("../inp.txt", "r", stdin);
    #endif

    int w, n; cin >> w >> n;
    int profit[n], wt[n];
    for(int i=0; i<n; i++){
        int temp; cin >> temp;
        profit[i] = temp;
    }
    for(int i=0; i<n; i++){
        int temp; cin >> temp;
        wt[i] = temp;
    }

    memset(memo, -1, sizeof(memo));
   
    cout << "Profit: ";
    for(int i=0; i<n; i++){
        cout << profit[i] << " ";
    }
    cout << endl;
    
    cout << "wt: ";
    for(int i=0; i<n; i++){
        cout << wt[i] << " ";
    }
    cout << endl;

    cout << knapSackDP(wt, profit, w, n) << endl;;

    return 0;
}