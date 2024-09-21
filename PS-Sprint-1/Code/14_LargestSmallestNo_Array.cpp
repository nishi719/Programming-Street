/*
 14. **Finding the Largest and Smallest Numbers in an Array**  
    **Difficulty**: Easy  
    **Topics**: Basic Programming, Arrays  
    **Description**: Write a program to find the largest and smallest numbers in an array.  
    **Example**:  
    Input: `array = [4, 7, 1, 8, 5]`  
    Output: `Largest: 8, Smallest: 1`  
    Explanation: The largest number in the array is 8 and the smallest is 1. 
*/

#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter the size of the array: ";
    cin>>size;
    int array[size];
    cout<<"Enter the elements of the array: ";
    for(int i=0; i<size; i++){
        cin>>array[i];
        }
        int max = array[0];
        int min = array[0];
        for(int i=1; i<size; i++){
            if(array[i]>max){
                max = array[i];
            }
            if(array[i]<min){
                min = array[i];
            }
        }
        cout<<"Largest: "<<max<<", Smallest: "<<min<<endl;
        return 0;

}