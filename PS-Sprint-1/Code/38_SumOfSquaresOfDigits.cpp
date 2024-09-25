/*
38. **Finding the Sum of Squares of Digits**  
    **Difficulty**: Easy  
    **Topics**: Basic Programming, Mathematical Computations  
    **Description**: Write a program to find the sum of the squares of the digits of a number.  
    **Example**:  
    Input: `number = 123`  
    Output: `14`  
    Explanation: The sum of the squares of digits is 1^2 + 2^2 + 3^2 = 14.  
*/
#include<iostream>
#include<cmath>

using namespace std;
int main(){
    int number ,sum =0 ;
    cout<<"Enter number :";
    cin>>number;
    while(number != 0){
        sum = sum + pow((number%10),2);
        number = number / 10 ;
    }
    cout<<"Sum of squares of digits is : "<<sum;
}