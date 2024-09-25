/*
40. **Calculating the Sum of Digits of a Number Until Single Digit**  
    **Difficulty**: Medium  
    **Topics**: Mathematical Computations  
    **Description**: Write a program to keep summing the digits of a number until a single digit is obtained.  
    **Example**:  
    Input: `number = 9875`  
    Output: `2`  
    Explanation: The sum of digits is 9 + 8 + 7 + 5 = 29, and then 2 + 9 = 11, and finally 1 + 1 = 2.  

*/
#include<iostream>
using namespace std;
int main(){
    int number ,sum =0 ,temp;
    cout<<"Enter number :";
    cin>>number;
    while(number != 0){
        temp = number%10;
        sum = sum+temp;
        number = number/10;

    }
    while(sum !=0){
        temp = sum%10;
        sum = sum/10;
    
    }
    cout<<"Sum of digits until single digit is "<<temp;
    return 0;
    

}