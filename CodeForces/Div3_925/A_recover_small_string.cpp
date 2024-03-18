/*
    link: https://codeforces.com/contest/1931/problem/A
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
        int total; cin >> total;
        tuple<char, char, char> t;
        int flag = 0;

        for(char i = 'a'; i<= 'z'; i++){
            int sum = i - 96;
            for(char j = 'a'; j<='z'; j++){
                sum+= (j-96);
                for(char k = 'a'; k<='z'; k++){
                    sum += (k-96);
                    if(sum == total){
                        t = make_tuple(i, j, k);
                        flag = 1;
                        break;
                    }
                    sum -= (k-96);
                }
                if(flag) break;
                sum-= (j-96);
            }
            if(flag) break;
            sum -= (i-96);
        }

        cout << get<0>(t) << get<1>(t) << get<2>(t) << endl;
    }

    return 0;
}