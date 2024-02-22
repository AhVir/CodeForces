#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define pri pair<int, int>
#define pr(x) cout<<#x<<"="<<x<<endl
#define pp(x) cout <<x<<endl
#define ps(x) cout <<#x<<endl

void make(int v, vector<int>& parent, vector<int>& size){
    parent[v] = v;
    size[v] = 1;
}

int find(int v, vector<int>& parent){
    if(v == parent[v]) return v;
    // else{
    //     while(v != parent[v]){
    //         v = parent[v];
    //     }
    //     return v;
    // }
    // return find(parent[v], parent); -> normal find operation
    return parent[v] = find(parent[v], parent);     // -> path compression of Find operation
}

void Union(int u, int v, vector<int>& parent, vector<int>& size){
    u = find(u, parent);
    v = find(v, parent);
    
    if(u == v){
        ps("Already Unioned!");
    }
    else{
        if(size[u] < size[v]){
            parent[u] = v;
        }
        else{
            parent[v] = u;
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    #endif

    int n, k; cin >> n >> k;
    vector<int> parent(n+5);
    vector<int> size(n+5, -1);

    //Making the set
    for(int i=1; i<=n; i++) make(i, parent, size);

    while(k--){
        int x, y; cin >> x >> y;
        Union(x, y, parent, size);
    }

    int cnt = 0;
    set<int> st;

    for(int i=1; i<=n; i++){
        st.insert(find(i, parent));
    }
    cnt = st.size();

    for(auto i = st.begin(); i != st.end(); ++i){
        cout << *i << " ";
    }
    cout << endl;
    pr(cnt);


    return 0;
}