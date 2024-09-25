/*
48. **Finding the Sum of Prime Factors of a Number**  
    **Difficulty**: Medium  
    **Topics**: Number Theory, Mathematical Computations  
    **Description**: Write a program to find the sum of the prime factors of a given number.  
    **Example**:  
    Input: `number = 12`  
    Output: `5`  
    Explanation: The prime factors of 12 are 2 and 3, and their sum is 2 + 3 = 5.  

*/
#include<iostream>
using namespace std;
int main(){
    int number ;
    cout<<"Enter number :";
    cin>>number;

    int sum =0;
    while(number != 0){
        int i = 2 ;
        while(number % i != 0){
            i++;
        }
        sum = sum + i ;
        number = number / i ;
        }
        
        cout<<"Sum of prime factors is "<<sum;

    return 0;
}