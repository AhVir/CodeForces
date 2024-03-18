/*
    link: https://codeforces.com/contest/1878/problem/B
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
        set<int> st;

        int i=2, j=3;
        int _k = 4;

        while(st.empty()){
            int sum = i+j;
            if((3*_k)%sum != 0){
                st.insert(i);
                st.insert(j);
                st.insert(_k);
            }
            else{
                _k++;
            }
        }

        auto it1 = ++st.begin();
        auto it2 = ++it1;
        int k = *it2 + 1;

        while(st.size() != n){
            int sum = *it1 + *it2;

            if((3*k)%sum != 0){
                int s = st.size();
                st.insert(k);
                if(st.size() > s){
                    it1++, it2++;
                    k = *it2 + 1;
                }
            }
            k++;
        }

        for(auto it=st.begin(); it!=st.end(); it++){
            cout << *it << " ";
        }
        cout << endl;
    }

    return 0;
}