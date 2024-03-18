#include<iostream>
#include<vector>
using namespace std;

void subSequences(int ar[], vector<int> res, int idx, int len){
    if(idx>=len){
        cout << "{";
        for(auto a:res) cout << a << ", ";
        cout << "}" << endl;
        return;
    }

    // subSequences(ar, res, idx+1, len);  -> for kind of ascending result

    //Take
    res.push_back(ar[idx]);
    subSequences(ar, res, idx+1, len);

    //Skip
    res.pop_back();
    subSequences(ar, res, idx+1, len);
}

int main(){
    int ar[] = {3, 1, 2};
    int size = sizeof(ar)/sizeof(ar[0]);
    vector<int> res;
    
    subSequences(ar, res, 0, size);

    return 0;
}