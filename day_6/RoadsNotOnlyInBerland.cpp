/*
    link: https://codeforces.com/contest/25/problem/D
*/

#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define pri pair<int, int>
#define pr(x) cout<<#x<<"="<<x<<endl
#define pp(x) cout <<x<<endl
#define ps(x) cout <<#x<<endl

int find(int x, vector<int>& parent){
    if(parent[x] == x) return x;
    return parent[x] = find(parent[x], parent);
}

void Union(int x, int y, vector<int>& parent, vector<int>& size, vector<pair<int,int>>& delRoad){
    int a =x;
    int b = y;
    x = find(x, parent);
    y = find(y, parent);
    if(x == y){
        delRoad.pb({a, b});
        return;
    }
    else{
        if(size[x] < size[y]){
            parent[x] = y;
            size[y] += size[x];
        }
        else{
            parent[y] = x;
            size[x] += size[y];
        }
    }
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    #ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    #endif

    int n; cin >> n;
    vector<int> parent(n+5);
    vector<int> size(n+5, 0);
    vector<pair<int,int>> delRoad;
    vector<pair<int,int>> makeRoad;
    for(int i=1; i<=n; i++){
        parent[i] = i;
        size[i] = 1;
    }

    int k = n-1;
    while(k--){
        int x, y;
        cin >> x >> y;
        Union(x, y, parent, size, delRoad);
    }

    // pr(delRoad.size());
    // for(auto i:delRoad){
    //     cout << i.first << " " << i.second;
    //     cout << endl;
    // }

    set<int> s;
    for(int i=1; i<=n; i++){
        s.insert(find(i, parent));
    }
    // pr(s.size());


    if(s.size() == 1){
        cout << "0" << endl;
    }
    else{
        // int tar = *s.begin();
        int tar = parent[1];
        for(int i=1; i<=n; i++){
            if(i==tar) continue;

            if(find(i, parent) != find(tar, parent)){
                makeRoad.pb({tar, i});
                Union(i, tar, parent, size, delRoad);
            }
        }
        // pr(delRoad.size());
        // pr(makeRoad.size());
        cout << delRoad.size() << endl;

        for(int i=0; i<delRoad.size(); ++i){
            cout << delRoad[i].first << " " << delRoad[i].second << " " << makeRoad[i].first << " " << makeRoad[i].second << endl;
        }
    }

    return 0;
}