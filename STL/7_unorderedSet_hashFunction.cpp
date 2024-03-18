#include<bits/stdc++.h>
using namespace std;

struct hashFunction 
      {
         size_t operator()(const vector<int> &myVector) const 
         {
             std::hash<int> hasher;
             size_t answer = 0;
             for (int i : myVector) 
            {
                answer ^= hasher(i) + 0x9e3779b9 + 
                                  (answer << 6) + (answer >> 2);
           }
           return answer;
       }
};


int main(){
    unordered_set< vector<int>, hashFunction > set;

    set.insert({2, 3, 5, 8});
    set.insert({1, 2, 4, 8, 9});
    set.insert({2, 3, 5, 8});


    for(auto &a : set){
        for(auto &b : a) cout << b << " ";
        cout << endl;
    }


    return 0;
}