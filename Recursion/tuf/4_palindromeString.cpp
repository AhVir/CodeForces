#include<iostream>
using namespace std;

// bool isPalindrome(char str[], int l, int len){
//     if(l>=len/2) return true;

//     if(str[l]==str[len-1-l]){
//        return isPalindrome(str, l+1, len);
//     }
//     else{
//         return false;
//     }
// }


bool isPalindrome(string str, int l){
    if(l>=str.size()/2) return true;

    if(str[l]==str[str.size()-1-l]){
       return isPalindrome(str, l+1);
    }
    else{
        return false;
    }
}

int main(){
    // char name[] = {'m', 'a', 'd', 'a', 'm'};
    string name = "madam";
    int num = 5223;
    name = to_string(num);
    int len = sizeof(name)/sizeof(name[0]);

    // (isPalindrome(name, 0, len))?(cout << "Palindrome" << endl):(cout << "Not Palindrome" << endl);


    (isPalindrome(name, 0))?(cout << "Palindrome" << endl):(cout << "Not Palindrome" << endl);

    return 0;
}