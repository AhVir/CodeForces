#include<bits/stdc++.h>
using namespace std;

int main() {
    map<string, int> m;
    int n;
    cin >> n;
    
    while(n--){
        string temp;
        cin >> temp;
        auto it = m.find(temp);
        
        if(it == m.end()){
            m[temp] = 1;
        }
        else{
            it->second += 1;
        }
        // m[temp]++;    -> m[temp] creates a key with 0 value, then increases the value to 1 if it doesn't exist. if it exists, still it increases it by 1 value.
        // or m[temp] = m[temp] + 1;
    }
    
    for(auto &it : m){
        cout << it.first << "-> " << it.second << endl;
    }

    return 0;
}