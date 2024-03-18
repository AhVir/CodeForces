/*
    link: 
*/

#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define pri pair<int, int>
#define pr(x) cout<<#x<<"="<<x<<endl
#define prd(x) cout<<x<<" "
#define pp(x) cout <<x<<endl
#define ps(x) cout <<#x<<endl
#define brk cout<<endl

bool mat[1005][1005];

void printMat(int w, int n){
    for(int i=0; i<=n; i++){
        for(int j=0; j<=w; j++){
            cout << mat[i][j] << " ";
        }
        brk;
    }
    brk;
}

bool subsetSum(int val[], int w, int n){
    for(int i=0; i<=w; i++) mat[0][i] = false;
    for(int i=0; i<=n; i++) mat[i][0] = true;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=w; j++){
            if(val[i-1] <= j){
                mat[i][j] = (mat[i-1][j-val[i-1]] || mat[i-1][j]);
            }
            else mat[i][j] = mat[i-1][j];
        }
    }

    printMat(w, n);

    return mat[n][w];
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    #ifndef ONLINE_JUDGE
    freopen("../inp.txt", "r", stdin);
    #endif

    int n, sum; cin >> n >> sum;
    int ar[n];

    for(int i=0; i<n; i++){
        int temp; cin >> temp;
        ar[i] = temp;
    }

    cout << subsetSum(ar, sum, n) << endl;;

    return 0;
}