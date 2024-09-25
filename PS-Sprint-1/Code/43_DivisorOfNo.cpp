/*
43. **Finding All Divisors of a Number**  
    **Difficulty**: Easy  
    **Topics**: Basic Programming, Mathematical Computations  
    **Description**: Write a program to find all divisors of a given number.  
    **Example**:  
    Input: `number = 12`  
    Output: `1, 2, 3, 4, 6, 12`  
    Explanation: The divisors of 12 are 1, 2, 3, 4, 6, and 12.
*/
#include<iostream>
using namespace std;
int main(){
    int number;
    cout<<"Enter number :";
    cin>>number;
    cout<<"The divisors of number :"<<number<<" are :"<<endl;
    for(int i=1;i<=number;i++){
        if(number%i==0){
            cout<<i<<", ";
            }
            }
            return 0;

}