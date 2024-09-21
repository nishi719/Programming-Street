/*
  **Calculating Armstrong Numbers**  
   **Difficulty**: Easy  
   **Topics**: Basic Programming, Number Theory  
   **Description**: Write a program to check if a number is an Armstrong number.  
   **Example**:  
   Input: `number = 153`  
   Output: `Armstrong Number`  
   Explanation: 153 is an Armstrong number because 1^3 + 5^3 + 3^3 = 153.
*/

#include<iostream>
#include<cmath>
using namespace std;

int count_digit(int n){
  int count;
  while (n)
  {
   count++;
   n /= 10;
  }
  return count;
  
}
int Armstrong(int n ,int d){
  int num = n ,ans =0 ,rem;

  while(n){
    rem = n%10;
    n /= 10;
    ans = ans + pow(rem,d);
  }

 
}
int main(){
  int number;
  cout<<"Enter a number :";
  cin>>number;
  int d = count_digit(number);
  if(Armstrong(number,d)){
    cout<<number<<" is an Armstrong Number";
    }
    else{
      cout<<number<<" is not an Armstrong Number";
    }
    return 0;
}