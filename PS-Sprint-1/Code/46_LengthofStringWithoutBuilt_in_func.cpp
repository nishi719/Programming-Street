/*
46. **Determining the Length of a String Without Using Built-In Functions**  
    **Difficulty**: Medium  
    **Topics**: String Manipulation  
    **Description**: Write a program to determine the length of a string without using built-in functions.  
    **Example**:  
    Input: `string = "hello"`  
    Output: `5`  
    Explanation: The length of the string "hello" is determined without using built-in functions.  

*/

#include<iostream>
using namespace std;
int main(){
    char string[100];
    int length = 0;
    cout << "Enter a string: ";
    cin>>string;
    while(string[length] != '\0'){
        length++;
    }
    cout << "Length of the string is: " << length;
    return 0;
}