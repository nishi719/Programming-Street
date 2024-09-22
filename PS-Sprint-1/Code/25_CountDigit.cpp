/*
25. **Finding the Number of Digits in a Number**  
    **Difficulty**: Easy  
    **Topics**: Basic Programming, Mathematical Computations  
    **Description**: Write a program to count the number of digits in a given number.  
    **Example**:  
    Input: `number = 12345`  
    Output: `5`  
    Explanation: The number 12345 has 5 digits. 
*/
#include<iostream>
using namespace std;

int main(){
    int number,count =0;
    cout<<"Enter a number: ";
    cin>>number;
    while(number != 0){
        number /= 10;
        count++;
    }
    cout<<"Number of digits: "<<count;
    return 0;

}