/*
    link: https://codeforces.com/problemset/problem/469/A 
*/

#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define pri pair<int, int>
#define pr(x) cout<<#x<<"="<<x<<endl
#define pp(x) cout <<x<<endl
#define ps(x) cout <<#x<<endl

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    #ifndef ONLINE_JUDGE
    freopen("../in.txt", "r", stdin);
    #endif

    int n; cin >> n;
    int x; cin >> x;
    set<int> s;
    vector<int> xLvl;
    for(int i=0; i<x; i++){
        int temp; cin >> temp;
        xLvl.push_back(temp); 
        s.insert(temp);
    }
    int y; cin >> y;
    if((x+y) < n){
        cout << "Oh, my keyboard!" << endl;
        return 0;
    }
    vector<int> yLvl;
    for(int i=0; i<y; i++){
        int temp; cin >> temp;
        yLvl.push_back(temp);
        s.insert(temp);
    }
    if(s.size() == n){
        cout << "I become the guy." << endl;
    }
    else cout << "Oh, my keyboard!" << endl;

    return 0;
}