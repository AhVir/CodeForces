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

bool mat[10005][10005];

bool equalPartition(int val[], int n){
    int sum = 0;
    sum = accumulate(val, val+n, sum);
    if(sum%2 != 0)
        return false;

    int target = sum/2; 
    for(int i=0; i<=target; i++) mat[0][i] = false;
    for(int i=0; i<=target; i++) mat[i][0] = true;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=target; j++){
            if(val[i-1] <= j){
                mat[i][j] = (mat[i-1][j-val[i-1]] || mat[i-1][j]);
            }
            else mat[i][j] = mat[i-1][j];
        }
    }

    return mat[n][target];
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    #ifndef ONLINE_JUDGE
    freopen("../inp.txt", "r", stdin);
    #endif
    int n; cin >> n;
    int ar[n];
    for(int i=0; i<n; i++){
        int temp; cin >> temp;
        ar[i] = temp;
    }

    cout << equalPartition(ar, n) << endl;

    return 0;
}