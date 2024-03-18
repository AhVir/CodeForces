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

int mat[4+1][5+1];

void printMat(int W, int n){
    for(int i=0; i<=n; i++){
        for(int j=0; j<=W; j++){
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

void Print(int ar[], int n){
    for(int i=0; i<n; i++){
        cout << ar[i] << " ";
    }
    cout << endl;
}

int knapSackTD(int val[], int wt[], int W, int n){
    for(int i=0; i<=W; ++i) mat[0][i] = 0;
    for(int i=0; i<=n; ++i) mat[i][0] = 0;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=W; j++){
            if(wt[i-1] <= j){
                mat[i][j] = max(val[i-1]+mat[i-1][j-wt[i-1]], mat[i-1][j]);
            }
            else{
                mat[i][j] = mat[i-1][j];
            }
        }
    }

    printMat(W, n);

    return mat[W][n];
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    #ifndef ONLINE_JUDGE
    freopen("../inp.txt", "r", stdin);
    #endif
    memset(mat, -1, sizeof(mat));
    
    int w, n; cin >> w >> n;
    int wt[n], val[n];
    for(int i=0; i<n; i++){
        int temp; cin >> temp;
        val[i] = temp;
    }
    for(int i=0; i<n; i++){
        int temp; cin >> temp;
        wt[i] = temp;
    }
    // cout << "Val: ";
    // Print(val, sizeof(val)/sizeof(val[0]));
    // cout << "Wt: ";
    // Print(wt, sizeof(wt)/sizeof(wt[0]));


    cout << knapSackTD(val, wt, w, n) << endl;

    return 0;
}