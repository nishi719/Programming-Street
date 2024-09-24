/*
28. **Finding the Sum of the Digits of the Factorial of a Number**  
    **Difficulty**: Easy  
    **Topics**: Basic Programming, Mathematical Computations  
    **Description**: Write a program to find the sum of the digits of the factorial of a given number.  
    **Example**:  
    Input: `number = 4`  
    Output: `9`  
    Explanation: The factorial of 4 is 24, and the sum of the digits (2 + 4) is 6.  

*/
#include<iostream>
using namespace std;

int main(){
    int number;
    cout<<"Enter number :";
    cin >> number;
    int factorial = 1;
    for(int i = 1; i <= number; i++){
        factorial *= i;
    }
    int sum = 0;
    while(factorial != 0){
        sum += factorial % 10;
        factorial /= 10;
        }
        cout<<"Sum of the digits of the factorial of "<<number<<" is "<<sum;

}