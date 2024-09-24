/*
34. **Checking for an Anagram**  
    **Difficulty**: Easy  
    **Topics**: String Manipulation  
    **Description**: Write a program to check if two strings are anagrams.  
    **Example**:  
    Input: `string1 = "listen"`, `string2 = "silent"`  
    Output: `True`  
    Explanation: "listen" and "silent" are anagrams of each other.  
*/

#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main(){
    string str1, str2;
    cout << "Enter first string: ";
    cin >> str1;
    cout << "Enter second string: ";
    cin >> str2;
    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());
    if(str1 == str2)
    cout << "\nThe strings are anagrams.";
    else
    cout << "\nThe strings are not anagrams.";
    return 0;
    }
