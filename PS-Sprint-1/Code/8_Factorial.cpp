/*
8. **Finding the Factorial of a Number**  
   **Difficulty**: Easy  
   **Topics**: Basic Programming, Mathematical Computations  
   **Description**: Write a program to compute the factorial of a given number.  
   **Example**:  
   Input: `number = 5`  
   Output: `120`  
   Explanation: 5! (factorial) is 5 × 4 × 3 × 2 × 1 = 120.  
*/

#include<iostream>
using namespace std;
int factorial(int n){
    if( n== 0 || n ==1 )
     return 1;
    return factorial(n-1)*n;

}
int main(){
    int number ;
    cout<<"Enter number   to find factorial : ";
    cin>>number;
    int result = factorial(number);
    cout<<"Factorial of "<<number<<" is :"<<result;

}