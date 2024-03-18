/*
    link: https://codeforces.com/problemset/problem/263/A
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    #endif

    int mat[5][5];
    int x, y;
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            int temp; cin >> temp;
            mat[i][j] = temp;
            if(temp != 0){
                x = i;
                y = j;
            }
        }
    }

    int resX = 2-x;
    int resY = 2-y;
    if(resX < 0) resX *= -1;
    if(resY < 0) resY *= -1;

    cout << resX + resY << endl;

    return 0;
}