/*
**Checking for Prime Numbers**  
   **Difficulty**: Easy  
   **Topics**: Basic Programming, Number Theory  
   **Description**: Write a program to determine if a number is prime.  
   **Example**:  
   Input: `number = 7`  
   Output: `Prime`  
   Explanation: 7 has no divisors other than 1 and itself, so it is a prime number. 
*/

#include<iostream>
using namespace std;

void Prime_number(int number){
    int i = 2;
    while (i < number) {
        if (number % i == 0) {
            cout <<number<< " is not Prime";
            return;
            }
            i++;
            }
            cout<<number << " is Prime";
    
}

int main(){
    int number;
    cout<<"Enter a number : ";
    cin>>number;
    Prime_number(number);

    return 0;

}