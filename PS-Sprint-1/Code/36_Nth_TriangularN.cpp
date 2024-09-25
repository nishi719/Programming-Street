/*
36. **Finding the N-th Triangular Number**  
    **Difficulty**: Easy  
    **Topics**: Basic Programming, Mathematical Computations  
    **Description**: Write a program to find the N-th triangular number.  
    **Example**:  
    Input: `N = 4`  
    Output: `10`  
    Explanation: The 4th triangular number is 10 (sum of the first 4 natural numbers).

*/
#include<iostream>
using namespace std;
int main(){
    int number ;
    cout<<"Enter number :";
    cin>>number;
    int triangular_number = (number * (number + 1))/2 ;
    cout<<"Triangular number is : "<<triangular_number ;
    return 0;

}

