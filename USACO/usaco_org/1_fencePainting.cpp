#include<bits/stdc++.h>
using namespace std;

int main(){
    freopen("paint.in", "r", stdin);
    freopen("paint.out", "w", stdout);

    int a, b, c, d; cin >> a >> b >> c >> d;

    // First approach:
    // if((d >= a && d <= b) || (a >= c && a <= d)){
    //     cout << b-c << endl;
    // }
    // else if((c >= a && c <= b) || (b >= a && b <= d)){
    //     cout << d-a << endl;
    // }
    // else{
    //     cout << (b-a) + (d-a) << endl;
    // }


    //Solution:
    vector<bool> fence(101, false);

    for(int i=a; i<b; i++){
        fence[i] = true;
    }
    for(int i=c; i<d; i++){
        fence[i] = true;
    }

    cout << count(fence.begin(), fence.end(), true) << endl;

    return 0;
}