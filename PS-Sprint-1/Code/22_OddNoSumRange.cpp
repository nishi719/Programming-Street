/*
22. **Calculating the Sum of Odd Numbers in a Range**  
    **Difficulty**: Easy  
    **Topics**: Basic Programming, Mathematical Computations  
    **Description**: Write a program to find the sum of all odd numbers within a given range.  
    **Example**:  
    Input: `range = [1, 10]`  
    Output: `25`  
    Explanation: The sum of odd numbers between 1 and 10 is 1 + 3 + 5 + 7 + 9 = 25.

*/
#include<iostream>
using namespace std;
int main(){
    int start, end, sum = 0;
    cout << "Enter the start of the range: ";
    cin >> start;
    cout << "Enter the end of the range: ";
    cin >> end;
    for(int i = start; i <= end; i++){
        if(i % 2 != 0){
            sum += i;
        }
        }
        cout << "\nSum of odd numbers in the range: " << sum<<endl;

        return 0;

}