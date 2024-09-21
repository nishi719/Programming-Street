/*
9. **Summing Digits of a Number**  
   **Difficulty**: Easy  
   **Topics**: Basic Programming, Mathematical Computations  
   **Description**: Write a program to calculate the sum of digits of a number.  
   **Example**:  
   Input: `number = 1234`  
   Output: `10`  
   Explanation: The sum of the digits 1 + 2 + 3 + 4 = 10. 
*/
#include<iostream>
using namespace std;

int sum(int n){
    int sum = 0;
    while(n != 0){
        sum += n % 10;
        n /= 10;
        }
        return sum;

}

int main(){
    int number;
    cout<<"Enter number to calculate the sum of digits of number : ";
    cin>>number;
    int result = sum(number);

    cout<<"Sum of "<<number<<" is :"<<result;
    return 0;


}