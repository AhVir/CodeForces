/*
    link:  https://codeforces.com/problemset/problem/1931/A 
*/

#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define pri pair<int, int>
#define pr(x) cout<<#x<<"="<<x<<endl
#define pp(x) cout <<x<<endl
#define ps(x) cout <<#x<<endl

void combination(int base, int target, vector<char>& res, bool& terminate){
    if((res.size() >= 3) || (target == 0)){
        terminate = true;
        for(auto a:res) cout << a;
        cout << endl;

        return;
    }

    for(int i=1; i<=26; ++i){
        if(terminate == true){
            break;
        }
        int num = base+i;
        char temp = (char)num;
        res.push_back(temp);
        combination(base, target-i, res, terminate);
        res.pop_back();
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    #ifndef ONLINE_JUDGE
    freopen("../in.txt", "r", stdin);
    #endif

    int t; cin >> t;

    while(t--){
        int num; cin >> num;
        bool terminate = false;

        vector<char> res;
        combination(96, num, res, terminate);

        pr("hi");

        cout << res.size() << endl;
    }

    return 0;
}