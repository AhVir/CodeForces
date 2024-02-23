#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    tuple<int, string, int> t = make_tuple(2, "Sheikh Tanvir Ahmed", 99);
    cout << get<1>(t) << endl;


    return 0;
}