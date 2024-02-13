/*
    link: https://codeforces.com/problemset/problem/1883/B
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    #ifndef ONLINE_JUDGE
    freopen("../in.txt", "r", stdin);
    #endif

    #define at auto

    int q; cin >> q;
    while(q--){
        int n, k; cin >> n >> k;
        string st; cin >> st;
        vector<int> count;    

        if((k == 0 && n == 1) || (n-k == 1)){
            cout << "YES" << endl;
            continue;
        }

        sort(st.begin(), st.end());
        int oddCount = 0;

        for(int i=0; i < st.size(); i++){
            if(st[i] != '_'){
                int cnt = 1;
                int j = i+1;

                while((st[j] == st[i]) && (j<st.size())){
                    st[j] = '_';
                    j++;
                    cnt++;
                }
                if(cnt%2 != 0) oddCount++;
                else count.push_back(cnt);
            }
        }

    }

    return 0;
}