/*
16. **Finding the Sum of Elements in an Array**  
    **Difficulty**: Easy  
    **Topics**: Basic Programming, Arrays  
    **Description**: Write a program to find the sum of elements in an array.  
    **Example**:  
    Input: `array = [1, 2, 3, 4, 5]`  
    Output: `15`  
    Explanation: The sum of the elements in the array is 15.
*/

#include<iostream> 
using namespace std;
int main(){
    int size;
    cout<<"Enter the size of the array: ";
    cin>>size;
    int array[size];
    int sum = 0;
    cout<<"Enter the elements of the array: ";
    for(int i = 0; i < size; i++){
        cin>>array[i];
        sum += array[i];
    }
    cout<<"The sum of the elements in the array is: "<<sum;
    return 0;

}