/*
50. **

Finding the Longest Substring Without Repeating Characters**  
    **Difficulty**: Medium  
    **Topics**: String Manipulation, Sliding Window  
    **Description**: Write a program to find the longest substring without repeating characters in a given string.  
    **Example**:  
    Input: `string = "abcabcbb"`  
    Output: `"abc"`  
    Explanation: The longest substring without repeating characters is "abc".
*/

#include<iostream>
using namespace std;
int main(){
    string str;
    cout<<"Enter string :";
    cin>>str;
    int start = 0, maxLength = 0, maxStart = 0;
    int charIndex[256] = {0};
    for(int i = 0; i < str.length(); i++){
    if(charIndex[str[i]] > start){
        start = charIndex[str[i]];
        charIndex[str[i]] = i;
        }
    else{
        charIndex[str[i]] = i;
        }
        if(i - start + 1 > maxLength){
            maxLength = i - start + 1;
            maxStart = start;
            }
            }
            cout<<"Longest substring without repeating characters is : "<<str.substr(maxStart, maxLength)<<endl;
            return 0;


}