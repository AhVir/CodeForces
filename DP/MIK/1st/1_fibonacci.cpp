#include<iostream>
#include<vector>
using namespace std;



int fibo(int num, vector<int>& memo){
        if(num <= 1) return num;
        
        //memoization
        if(memo[num] != -1) return memo[num];
        
        memo[num] = fibo(num-1, memo) + fibo(num-2, memo);
        return memo[num];
}

int fib(int n) {
        if(n <= 1) return n;

        vector<int> memo(n+1);
        fill(memo.begin(), memo.end(), -1);

        return fibo(n, memo);
}

//Fibo bottomUp
int fib_bottomUp(int n) {
        if(n <= 1) return n;

        vector<int> memo(n+1);

        memo.at(0) = 0;
        memo.at(1) = 1;
        for(int i=2; i<=n; i++){ 
            memo.at(i) = memo.at(i-1) + memo.at(i-2);
        }

        return memo.at(n);
}
//

//Fibo buttonUp ConstantSpace
int recurLoop(int n, int b, int a){
    if(n <= 1) return b;

    int c = a + b;
    return recurLoop(n-1, c, c-a);
}

int fib_bottomUpConstantSpace(int n) {
        if(n <= 1) return n;

        return recurLoop(n, 1, 0);
}
//


int main(){
    cout << fib(10) << endl;

    return 0;
}