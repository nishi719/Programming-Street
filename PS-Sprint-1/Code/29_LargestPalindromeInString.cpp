/*
29. **Finding the Largest Palindrome in a String**  
    **Difficulty**: Easy  
    **Topics**: Basic Programming, String Manipulation  
    **Description**: Write a program to find the largest palindrome in a given string.  
    **Example**:  
    Input: `string = "babad"`  
    Output: `"bab"` or `"aba"`  
    Explanation: Both "bab" and "aba" are valid palindromes in the string.  
*/

#include<iostream>
using namespace std;

int main(){
    string str;
    cout<<"Enter string :";
    cin >> str;
    int n = str.length();
    int max = 0;
    string ans = "";
    for(int i = 0; i < n; i++){
    for(int j = i; j < n; j++){
        string s = str.substr(i, j - i + 1);
        if(s == string(s.rbegin(), s.rend()) && s.length() > max){
            max = s.length();
            ans = s;
            }
        }
    }
            cout<<"Largest palindrome is : "<<ans<<endl;

}