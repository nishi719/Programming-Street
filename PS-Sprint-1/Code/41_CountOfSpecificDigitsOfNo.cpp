/*
41. **Finding the Count of Specific Digits in a Number**  
    **Difficulty**: Easy  
    **Topics**: Basic Programming, String Manipulation  
    **Description**: Write a program to count the occurrences of a specific digit in a number.  
    **Example**:  
    Input: `number = 122333`, `digit = 3`  
    Output: `3`  
    Explanation: The digit 3 occurs 3 times in the number 122333. 
*/
#include<iostream>
using namespace std;
int main(){
    int number,digit ,count =0;
    cout<<"Enter number :";
    cin>>number;
    int num = number;
    cout<<"Enter digit to count :";
    cin>>digit;
    while(num>0){
        if(num%10==digit)
        count++;
        num = num/=10;
        }
        cout<<"Count of digit "<<digit<<" in number "<<number<<" is "<<count;
     
    return 0;
}