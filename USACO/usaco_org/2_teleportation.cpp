//link: https://usaco.org/index.php?page=viewproblem2&cpid=807

#include<bits/stdc++.h>
using namespace std;

int main(){
    freopen("teleport.in", "r", stdin);
    freopen("teleport.out", "w", stdout);

    int a, b, x, y; cin >> a >> b >> x >> y;

    int dist = abs(b-a);
    int total = 0;
    int distA = abs(x-a);
    int distB = abs(y-a);

    if(distA<distB){
        total += abs(x-a);
        total += abs(y-b);
    }
    else{
        total += abs(y-a);
        total += abs(x-b);
    }

    cout << min(dist, total) << endl;;

    return 0;
}