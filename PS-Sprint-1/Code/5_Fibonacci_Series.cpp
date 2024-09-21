/*
 **Generating the Fibonacci Series**  
   **Difficulty**: Easy  
   **Topics**: Basic Programming, Sequences  
   **Description**: Write a program to generate the Fibonacci series up to a given number.  
   **Example**:  
   Input: `limit = 10`  
   Output: `[0, 1, 1, 2, 3, 5, 8]`  
   Explanation: The Fibonacci series up to 10 is generated as [0, 1, 1, 2, 3, 5, 8].

*/

#include<iostream>
using namespace std;
int fibonacci_series(int n){
    int a = 0,b=1 ;
    cout<<a<<" "<<b<<" ";
    for(int i=2;i<n;i++){
        int temp = a+b ;
        a = b ;
        b = temp;
        cout<<b<<" ";
        }
        return 0;
   
}
int main(){
    int limit;
    cout<<"Enter the limit for the Fibonacci series: ";
    cin>>limit;
    fibonacci_series(limit);
    return 0;
    

}