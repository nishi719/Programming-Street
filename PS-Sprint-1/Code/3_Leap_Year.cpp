/*
 **Validating Leap Years**  
   **Difficulty**: Easy  
   **Topics**: Basic Programming, Date Handling  
   **Description**: Write a program to check if a given year is a leap year.  
   **Example**:  
   Input: `year = 2020`  
   Output: `Leap Year`  
   Explanation: 2020 is divisible by 4 but not by 100, or it is divisible by 400, so it is a leap year.
*/

#include<iostream>
using namespace std;

void LeapYear(int year){
    if(year%4 == 0 && year%100 != 0 || year%400 ==0 ){
        cout<<year << " is Leap Year.";
    }
    
    else{
        cout<<year<<" is not leap year.";
    }
}

int main(){
    int year;
    cout<<"Enter a year :";
    cin>>year;
    
    LeapYear(year);
    return 0;
}