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

        if(oddCount >= k){
            oddCount -= k;
            if(oddCount == 0 || oddCount == 1) cout << "Yes" << endl;
            else{
                cout << "No" << endl;
            }
            continue;
        }else{
            k-=oddCount;
            int step1 = k;
            int step2 = k+1;
            if(step1%2 == 0){
                while(step1 > 0){
                    if(count.size() == 0){
                        cout << "No" << endl;
                        continue;
                    }
                    count.pop_back();
                    step1 -= 2;
                }
                if(!count.empty()){
                    cout << "Yes" << endl;
                }
                else{
                    cout << "No" << endl;
                }
                continue;
            }
            else if(step2%2 == 0){
                while(step2 > 0){
                    if(count.size() == 0){
                        cout << "No" << endl;
                        continue;
                    }
                    count.pop_back();
                    step2 -=2;
                }
                if(!count.empty()){
                    cout << "Yes" << endl;
                }
                else{
                    cout << "No" << endl;
                }
                continue;
            }
        }


    }

    return 0;
}