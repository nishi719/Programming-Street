/*
 11. **Finding the Least Common Multiple (LCM)**  
    **Difficulty**: Easy  
    **Topics**: Basic Programming, Number Theory  
    **Description**: Write a program to find the LCM of two numbers.  
    **Example**:  
    Input: `a = 12, b = 15`  
    Output: `60`  
    Explanation: The LCM of 12 and 15 is 60. 
*/

#include<iostream>
using namespace std;

int main(){
    int a, b, hcf, lcm;
    cout << "Enter first numbers: ";
    cin >> a;
    cout << "Enter second numbers: ";
    cin >> b;
    for(int i = 1; i <= a; i++)
    if(a % i == 0 && b % i == 0)
    hcf = i;
    lcm = (a * b) / hcf;
    cout << "LCM of " << a << " and " << b << " is "<<lcm<<endl;

    return 0;
}