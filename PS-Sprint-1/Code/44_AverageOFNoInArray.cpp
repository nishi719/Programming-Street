/*
44. **Finding the Average of Numbers in an Array**  
    **Difficulty**: Easy  
    **Topics**: Arrays, Mathematical Computations  
    **Description**: Write a program to calculate the average of numbers in an array.  
    **Example**:  
    Input: `array = [1, 2, 3, 4, 5]`  
    Output: `3`  
    Explanation: The average of the numbers is (1 + 2 + 3 + 4 + 5) / 5 = 3. 
*/
#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter size of array :";
    cin>>size;
    int arr[size];
    cout<<"Enter elements of array : "<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int sum =0;
    for(int i=0;i<size;i++){
        sum = sum +arr[i];
    }
    float average = sum/size;
    cout<<"Average of the numbers is "<<average<<endl;

    return 0;
}