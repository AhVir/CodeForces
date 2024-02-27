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
        for(int i=0; i<n; i++){
            int temp; cin >> temp;
            ar[i] = temp;
        }

        int minIdx = INT_MAX, maxIdx = INT_MIN;
        for(int i=0; i<n; ++i){
            if(ar[i] < 0){
                minIdx = min(minIdx, i);
                maxIdx = max(maxIdx, i);
            }
        }
    }


    return 0;
}