/*
49. **Finding the Second Largest Number in an Array**  
    **Difficulty**: Medium  
    **Topics**: Arrays, Sorting  
    **Description**: Write a program to find the second largest number in an array.  
    **Example**:  
    Input: `array = [10, 20, 4, 45, 99]`  
    Output: `45`  
    Explanation: The second largest number in the array is 45. 
*/
#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter size of array :";
    cin>>size;
    int array[size];
    cout<<"Enter element of array : ";
    for(int i=0;i<size;i++){
        cin>>array[i];
    }
    
    int max = array[0];
    int second_max = array[0];
    for(int i = 1; i < size; i++) {
        if (array[i] > max) {
            second_max = max;
            max = array[i];
            }
            else if (array[i] > second_max && array[i] != max) {
                second_max = array[i];
                }
                }
                if(second_max==max)
                second_max=-1;
                cout<<"Second largest number is "<<second_max;

                return 0;

}