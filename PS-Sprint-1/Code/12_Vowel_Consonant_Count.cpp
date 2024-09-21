/*
  12. **Counting Vowels and Consonants in a String**  
    **Difficulty**: Easy  
    **Topics**: Basic Programming, String Manipulation  
    **Description**: Write a program to count vowels and consonants in a given string.  
    **Example**:  
    Input: `string = "hello world"`  
    Output: `Vowels: 3, Consonants: 7`  
    Explanation: "hello world" contains 3 vowels (e, o, o) and 7 consonants (h, l, l, w, r, l, d).

*/

#include <iostream>
using namespace std;
int main(){
    string str;
    int vowels = 0, consonants = 0;
    cout << "Enter a string: ";
    getline(cin, str);
    for (int i = 0; i < str.length(); i++) {
        char ch = tolower(str[i]);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        vowels++;
        else if (ch >= 'a' && ch <= 'z')
        consonants++;
        }
        cout << "Vowels: " << vowels << ", Consonants: " << consonants<<endl;

        return 0;
}