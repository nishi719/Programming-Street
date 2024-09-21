/*
  13. **Reversing a String**  
    **Difficulty**: Easy  
    **Topics**: Basic Programming, String Manipulation  
    **Description**: Write a program to reverse a given string.  
    **Example**:  
    Input: `string = "programming"`  
    Output: `"gnimmargorp"`  
    Explanation: The reversed string of "programming" is "gnimmargorp".
*/

#include<iostream>
using namespace std;
int main(){
    string str;
    cout<<"Enter a string: ";
    getline(cin,str);
    string rev ;
    for(int i=str.length()-1; i>=0; i--){
        rev = rev + str[i];
    }
    cout<<"Reversed string: "<<rev<<endl;
    return 0;

}