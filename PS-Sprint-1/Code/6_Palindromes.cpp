/*

**Identifying Palindromes**  
   **Difficulty**: Easy  
   **Topics**: Basic Programming, String Manipulation  
   **Description**: Write a program to check if a string or number is a palindrome.  
   **Example**:  
   Input: `string = "radar"`  
   Output: `Palindrome`  
   Explanation: "radar" reads the same backward as forward. 

*/
#include<iostream>
using namespace std;

void Palindromes(){
    string str;
    cout << "Enter a string: ";
    cin >> str;
    int length = str.length();
    bool isPalindrome = true;
    for (int i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            isPalindrome = false;
            break;
  }}
  if (isPalindrome) {
    cout << "Palindrome";
    } else {
        cout << "Not a Palindrome";
        }
}

int main(){
    Palindromes();


}