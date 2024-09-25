/*
37. **Checking for Perfect Squares**  
    **Difficulty**: Easy  
    **Topics**: Mathematical Computations  
    **Description**: Write a program to determine if a number is a perfect square.  
    **Example**:  
    Input: `number = 16`  
    Output: `True`  
    Explanation: 16 is a perfect square (4^2 = 16).
*/
#include<iostream>
#include<cmath>

using namespace std;
int main(){
    int number;
    cout<<"Enter number :";
    cin>>number;
    if (sqrt(number) == int(sqrt(number)))
    cout<<"True";
    else
    cout<<"False";
    
    return 0;
}