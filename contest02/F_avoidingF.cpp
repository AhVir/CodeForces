/*
    link: 
*/

#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define pri pair<int, int>
#define pr(x) cout<<#x<<"="<<x<<endl
#define pp(x) cout <<x<<endl
#define ps(x) cout <<#x<<endl

bool validIdx(int x, int y){
    if((x >= 0 && x < 7) && (y >= 0 && y <7)) return true;
    else return false;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    #ifndef ONLINE_JUDGE
    freopen("../in.txt", "r", stdin);
    #endif

    // int t; cin >> t;
    int t = 1;
    while(t--){
        int n = 7;
        vector<char> input[7];
        int res[7][7];

        for(int i=0; i<n; i++){
            string s; cin >> s;
            for(int j=0; j<n; j++){
                input[i].push_back(s[j]);
            }
        }

        for(int i=0; i<7; i++){
            for(int j=0; j<7; j++){
                int drI = i+1;
                int drJ = j+1;

                int dlI = i+1;
                int dlJ = j-1;

                int trI = i-1;
                int trJ = j+1;

                int tlI = i-1;
                int tlJ = j-1;

                // if(validIdx(drI, drJ)) res[drI][drJ]++;
                // if(validIdx(dlI, dlJ)) res[dlI][dlJ]++;
                // if(validIdx(trI, trJ)) res[trI][trJ]++;
                // if(validIdx(tlI, tlJ)) res[tlI][tlJ]++;
            }
        }
        int count = 0;

        for(int i=0; i<7; i++){
            for(int j=0; j<7; j++){
                cout << res[i][j] << " ";
            }
            cout << endl;
        }
    }


    return 0;
}