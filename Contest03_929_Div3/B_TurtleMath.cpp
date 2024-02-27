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

int minSum(vector<int>& v, int i, int move){
    //base case:
    if(i >= v.size()){
        return INT_MAX;
    }

    int sum = accumulate(v.begin(), v.end(), 0);
    if(sum%3 == 0){
        return move;
    }


    //recursive call:
    //removing:
    auto it = v.begin() + i;
    int temp = *it;
    v.erase(it);
    int call1 = minSum(v, i+1, move+1);
    v.insert(it, temp);

    //increasing:
    v[i+1]++;
    int call2 = minSum(v, i+1, move+1);

    return min(call1, call2);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    #ifndef ONLINE_JUDGE
    freopen("../in.txt", "r", stdin);
    #endif
    int t; cin >> t;

    while(t--){
        int n; cin >> n;
        vector<int> vec;

        int sum = 0;
        for(int i=0; i<n; i++){
            int temp; cin >> temp;
            vec.pb(temp);
            sum += temp;
        }

        if(sum%3 == 0){
            cout << '0' << endl;
        }
        else{
            int res = minSum(vec, 0, 0);
            cout << res << endl;
        }
    }

    return 0;
}