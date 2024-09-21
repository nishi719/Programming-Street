/*
20. **Checking for Perfect Numbers**  
    **Difficulty**: Easy  
    **Topics**: Basic Programming, Number Theory  
    **Description**: Write a program to determine if a number is a perfect number.  
    **Example**:  
    Input: `number = 28`  
    Output: `Perfect Number`  
    Explanation: 28 is a perfect number because its divisors (1, 2, 4, 7, 14) sum up to 28.

*/
#include<iostream>
using namespace std;
int main(){
    int number;
    cout<<"Enter a number: ";
    cin>>number;
    int sum = 0;
    for(int i = 1; i < number; i++){
        if(number % i == 0){
            sum += i;
        }
     }
        if(sum == number){
        cout<<number <<" is a Perfect Number"<<endl;
    }
        else{
        cout<<"Not a Perfect Number"<<endl;
    }

    return 0;
}