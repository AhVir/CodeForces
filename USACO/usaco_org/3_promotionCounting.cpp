//link: https://usaco.org/index.php?page=viewproblem2&cpid=591

#include<bits/stdc++.h>
using namespace std;

int main(){
    // freopen("promote.in", "r", stdin); freopen("promote.out", "w", stdout);


    int a1, a2, b1, b2, c1, c2, d1, d2;
    cin >> a1 >> a2 >> b1 >> b2 >> c1 >> c2 >> d1 >> d2;

    int cntSlv = 0, cntGld = 0, cntPlat = 0;

    int diffPlat = d2-d1; cntPlat += diffPlat;
    int diffGld = c2-c1; cntGld += diffGld;
    int diffSlv = b2-b1; cntSlv += diffSlv;

    if(diffPlat != 0){
        if(diffGld == 0) cntGld++;
        if(diffSlv == 0) cntSlv++;
    }

    if(diffGld != 0){
        if(diffSlv == 0) cntSlv++;
    }

    cout << diffSlv << endl << diffGld << endl << diffPlat << endl;

    return 0;
}