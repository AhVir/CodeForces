/*
    link:  https://codeforces.com/problemset/problem/20/C 
*/

#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define int long long
#define pri pair<int, int>
#define pr(x) cout<<#x<<"="<<x<<endl
#define pp(x) cout <<x<<endl
#define ps(x) cout <<#x<<endl

void dijkstra(vector<vector<pri>>& graph, vector<int>& dist, vector<bool>& visited, int start, vector<int>& parent){
    set<pri> s;
    dist[start] = 0;
    parent[start] = 1;
    s.insert({dist[start], start});

    while(!s.empty()){
        auto node = *s.begin();
        s.erase(s.begin());
        int v = node.second;
        int wt = node.first;
        if(visited[v]) continue;
        visited[v] = true;

        for(auto i:graph[v]){
            int child_v = i.first;
            int child_wt = i.second;
            if((dist[v] + child_wt) < dist[child_v]){
                dist[child_v] = dist[v] + child_wt;
                parent[child_v] = v;
                s.insert({dist[child_v], child_v});
            }
        }
    }
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    #ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    #endif

    int n, e; cin >> n >> e;
    vector<vector<pri>> graph(n+1);
    vector<int> dist(n+1, LONG_LONG_MAX);
    vector<bool> visited(n+1);
    vector<int> parent(n+1, LONG_LONG_MIN);
    for(int i=1; i<=e; ++i){
        int x, y, wt;
        cin >> x >> y >> wt;
        graph[x].pb({y, wt});
        graph[y].pb({x, wt});
    }

    dijkstra(graph, dist, visited, 1, parent);

    vector<int> res;
    int target = n;
    if(parent[target] == LONG_LONG_MIN){
        ps(-1);
        return 0;
    }
    while(target != 1){
        res.pb(target);
        target = parent[target];
    }
    res.pb(target);
    reverse(res.begin(), res.end());
    for(int i:res){
        cout << i << " ";
    }
    cout << endl;

    return 0;
}