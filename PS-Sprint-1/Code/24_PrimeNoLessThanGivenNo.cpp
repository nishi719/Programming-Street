/*
24. **Printing Prime Numbers Less Than a Given Number**  
    **Difficulty**: Easy  
    **Topics**: Basic Programming, Number Theory  
    **Description**: Write a program to print all prime numbers less than a given number.  
    **Example**:  
    Input: `number = 20`  
    Output: `2, 3, 5, 7, 11, 13, 17, 19`  
    Explanation: The prime numbers less than 20 are 2, 3, 5, 7, 11, 13, 17, and 19.
*/

#include<iostream>
using namespace std;
int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    for (int i = 2; i < number; i++) {
    bool isPrime = true;
    for (int j = 2; j <= i / 2; j++) {
    if (i % j == 0) {
        isPrime = false;
        break;
        }
    }
        if (isPrime) {
        cout << i << ", ";
        }
        }
        return 0;
}