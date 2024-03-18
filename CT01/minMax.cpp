#include<bits/stdc++.h>
using namespace std;

pair<int, int> minMax(int arr[], int i, int j){
    //base case:
    if(i == j){
        // return {arr[i], arr[i]};
        pair<int, int> res({arr[i], arr[i]});
        return res;
    }

    //DivConq
    int mid = (i+j)/2;  // -> shortening the length

    pair<int, int> leftSubTree = minMax(arr, i, mid);  // -> left recursive tree call
    pair<int, int> rightSubTree = minMax(arr, mid+1, j); // -> right recursive tree call


    //compare
    int minLeft = leftSubTree.first;
    int minRight = rightSubTree.first;
    int minimum = min(minLeft, minRight);

    int maxLeft = leftSubTree.second;
    int maxRight = rightSubTree.second;
    int maximum = max(maxLeft, maxRight);

    // return {minimum, maximum};

    //making pair of the ultimate minMax
    pair<int, int> res({minimum, maximum});
    return res;  // -> returning the minMax
} 

int32_t main(){
    int arr[] = { 34, -1, 5, 6, -50, -6};
    int n = 6;

    pair<int, int> result = minMax(arr, 0, n-1);

    cout << "Min: " << result.first << endl;
    cout << "Max: " << result.second << endl;

    return 0;
}