/*
 10. **Finding the Greatest Common Divisor (GCD)**  
    **Difficulty**: Easy  
    **Topics**: Basic Programming, Number Theory  
    **Description**: Write a program to find the GCD of two numbers.  
    **Example**:  
    Input: `a = 48, b = 18`  
    Output: `6`  
    Explanation: The GCD of 48 and 18 is 6.
*/

#include<iostream>
using namespace std;

int main(){
    int num1,num2 ,temp;
    cout<<"Enter the first number: ";
    cin>>num1;
    cout<<"Enter the second number: ";
    cin>>num2;
    while(num2!=0)
    {
        temp=num2;
        num2=num1%num2;
        num1=temp;
        
    
    }
        cout<<"GCD is "<<num1;
        return 0;
}