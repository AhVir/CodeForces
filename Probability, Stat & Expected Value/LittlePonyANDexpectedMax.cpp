/*
    link: https://codeforces.com/contest/453/problem/A 
*/

#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define pri pair<int, int>
#define pr(x) cout<<#x<<"="<<x<<endl
#define pp(x) cout <<x<<endl
#define ps(x) cout <<#x<<endl
#define int long long

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    #ifndef ONLINE_JUDGE
    freopen("../in.txt", "r", stdin);
    #endif

    int m, n; cin >> m >> n;
    double ExSum = 0.0;
    

    //for i = 1;
    double forOne = 1.0 * pow(1.0/m, n);
    ExSum += forOne;

    for(int i=2; i<= m; ++i){
        double present = pow((1.0*i)/m, n);
        double subs = pow(((i-1)*1.0)/m, n);
        double res = present - subs;
        res *= (i*1.0);

        ExSum += res;
    }

    cout << ExSum << endl;

    return 0;
}