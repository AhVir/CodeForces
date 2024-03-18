//link: https://usaco.org/index.php?page=viewproblem2&cpid=591

#include<bits/stdc++.h>
using namespace std;

int main(){
    freopen("promote.in", "r", stdin); freopen("promote.out", "w", stdout);

    int a1, a2, b1, b2, c1, c2, d1, d2;
    cin >> a1 >> a2 >> b1 >> b2 >> c1 >> c2 >> d1 >> d2;

    int plat = (d2-d1); //for Plat
    int gold = (d2-d1)+(c2-c1);  //for Gold
    int silver = (d2-d1)+(c2-c1)+(b2-b1); //for silver

    cout << silver << endl << gold << endl << plat << endl;


    return 0;
}