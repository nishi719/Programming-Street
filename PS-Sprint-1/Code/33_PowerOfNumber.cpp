/*
33. **Calculating the Power of a Number**  
    **Difficulty**: Easy  
    **Topics**: Basic Programming, Mathematical Computations  
    **Description**: Write a program to calculate the power of a number.  
    **Example**:  
    Input: `base = 2`, `exponent = 3`  
    Output: `8`  
    Explanation: 2 raised to the power of 3 is 8. 
*/

#include<iostream>
using namespace std;
int main(){
    int base, exponent, result = 1;
    cout << "Enter the base: ";
    cin >> base;
    cout << "Enter the exponent: ";
    cin >> exponent;
    for(int i = 0; i < exponent; i++)
    result = result * base;
    cout << "Result: " << result;

}

