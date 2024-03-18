#include<bits/stdc++.h>
using namespace std;
int calculate_sum(int arr[], int i, int j)
{
    if(i==j)
    {
        return arr[i];
    }
    int mid = (i+j)/2;
    int leftSum = calculate_sum(arr,i, mid);
    int rightSum = calculate_sum(arr, mid+1,j);

    return leftSum + rightSum;
}
int main()
{
    
    int array[5] = {1,2,3,4,5};
    int j = sizeof(array)/sizeof(array[0]);
    int s= calculate_sum(array, 0, j-1);
    cout<< s << endl;

}