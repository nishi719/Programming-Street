/*
26. **Checking if a Number is a Narcissistic Number**  
    **Difficulty**: Easy  
    **Topics**: Basic Programming, Number Theory  
    **Description**: Write a program to check if a number is a narcissistic number (where the sum of its digits raised to the power of the number of digits equals the number itself).  
    **Example**:  
    Input: `number = 153`  
    Output: `Narcissistic Number`  
    Explanation: 153 is a narcissistic number because 1^3 + 5^3 + 3^3 = 153.  
*/
#include<iostream>
#include<cmath>
using namespace std;

int count_digit(int number){
    int count =0;
    while(number){
      count++;
      number = number/10; 
      
    }
    return count;
}

void Narcissistic_Number(int n ,int digit){
    int num = n ,ans =0 ,rem;

  while(n){
    rem = n%10;
    n /= 10;
    ans = ans + pow(rem,digit);
  }
    if(ans == num){
        cout<<num<<" is Narcissistic number";
    }
    else{
        cout<<num<<" is not Narcissistic number";
    }
}

int main(){
    int number ;
    cout<<"Enter number :";
    cin>>number;

    int digit = count_digit(number);

    Narcissistic_Number(number,digit);

    return 0;

    
}