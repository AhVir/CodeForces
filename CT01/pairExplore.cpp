#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    pair<int, int> p;

    vector<int> vec;

    char fruits[] = {'a', 'b', 'm', 'a', 'b', 'm', 'm', 'a', 'b', 'b'};
    int n = sizeof(fruits)/sizeof(fruits[0]);
    set<int> s;

    for(int i=0; i<10; i++){
        s.insert(fruits[i]);
    }

    cout << "Unique fruits: " << s.size() << endl;

    for(auto it = s.begin(); it != s.end(); it++){
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}