/*
    link: https://usaco.org/index.php?page=viewproblem2&cpid=939
*/

#include<bits/stdc++.h>
using namespace std;

#define pr(x) cout<<#x<< "="<<x<<endl

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("buckets.in", "r", stdin);
    freopen("buckets.out", "w", stdout);
    
    int Br, Bc, Lr, Lc, Rr, Rc;

    for(int i=0; i<10; i++){
        for(int j=0; j<10; j++){
            char temp; cin >> temp;
            if(temp == 'R'){
                Rr = i;
                Rc = j;
            }
            if(temp == 'L'){
                Lr = i;
                Lc = j;
            }
            if(temp == 'B'){
                Br = i;
                Bc = j;
            }
        }
    }


    int total = abs(Br-Lr) + abs(Bc-Lc);

    // cout << "lake: " << Lr << " " << Lc << endl;
    // cout << "barn: " << Br << " " << Bc << endl;
    // cout << "Rock: " << Rr << " " << Rc << endl;
    // pr(total);

    if(((Bc == Lc && Bc == Rc) && (Rr >= min(Br, Lr) && Rr <= max(Br, Lr)))||
       ((Br == Lr && Br == Rr) && (Rc >= min(Bc, Lc) && Rc <= max(Bc, Lc)))){
        total += 1;
    }
    else{
        total--;
    }

    cout << total << endl;

    return 0;
}