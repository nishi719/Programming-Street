/*
21. **Calculating the Sum of Even Numbers in a Range**  
    **Difficulty**: Easy  
    **Topics**: Basic Programming, Mathematical Computations  
    **Description**: Write a program to find the sum of all even numbers within a given range.  
    **Example**:  
    Input: `range = [1, 10]`  
    Output: `30`  
    Explanation: The sum of even numbers between 1 and 10 is 2 + 4 + 6 + 8 + 10 = 30. 

*/
#include<iostream>
using namespace std;
int main(){
    int start, end, sum = 0;
    cout << "Enter the start of the range: ";
    cin >> start;
    cout << "Enter the end of the range: ";
    cin >> end;
    for (int i = start; i <= end; i++){
        if (i % 2 == 0){
            sum += i;
        }
    }
    cout << "\nSum of even numbers in the range: " << sum << endl;
    return 0;
}