/*
    link: https://codeforces.com/contest/1945/problem/C
*/

#include<bits/stdc++.h>
using namespace std;

#define pr(x) cout<<#x<<"="<<x<<endl
#define endl "\n"
#define int long long 

pair<int, int> leftHouses(string& s, int road){
    pair<int, int> a(0, 0);
    int leftH = 0;
    for(int i=0; i<road; i++){
        if(s[i] == '0') a.first++;
        if(s[i] == '1') a.second++;
    }

    return a;
}

pair<int, int> rightHouses(string& s, int road){
    pair<int, int> a(0, 0);
    for(int i=road; i<s.length(); i++){
        if(s[i] == '1') a.first++;
        if(s[i] == '0') a.second++;
    }

    return a;
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    #ifndef ONLINE_JUDGE
    freopen("../in.txt", "r", stdin);
    #endif

    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string s; cin >> s;

        vector<int> ans;
        
        for(int i=0; i<=n; i++){
            int road = i;
            pair<int, int> left = leftHouses(s, road);
            pair<int, int> right = rightHouses(s, road);

            // pr(left.first);
            // pr(left.second);
            // pr(right.first);
            // pr(right.second);

            double cal1 = (left.first*1.0)/(left.first+left.second*1.0);
            double cal2 = (right.first*1.0)/(right.first+right.second*1.0);



            if(((cal1 >= 0.5f) || isnan(cal1)) && ((cal2 >=0.5f)||(isnan(cal2)))) ans.emplace_back(i);
        } 

        int res = -1;
        int minimum = INT_MAX;
        for(auto a:ans){
            int temp = abs((n/2)-a);
            cout << a << " ";
            // pr(a);
            // pr(temp);
            // pr(minimum);
            // pr(res);
            if(temp < minimum) res = a, minimum = temp;
        }
        cout << endl;
        // pr(res);
    }

    return 0;
}