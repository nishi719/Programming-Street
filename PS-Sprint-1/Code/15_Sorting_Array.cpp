/*
15. **Sorting an Array**  
    **Difficulty**: Easy  
    **Topics**: Basic Programming, Sorting Algorithms  
    **Description**: Write a program to sort an array of numbers in ascending order.  
    **Example**:  
    Input: `array = [3, 1, 4, 1, 5, 9]`  
    Output: `[1, 1, 3, 4, 5, 9]`  
    Explanation: The array sorted in ascending order is [1, 1, 3, 4, 5, 9]. 
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
        for(int i=0; i<size-1; i++){
            for(int j=i+1; j<size; j++){
                if(array[i]>array[j]){
                    int temp=array[i];
                    array[i]=array[j];
                    array[j]=temp;
            }
        }
        }
        cout<<"Sorted array: ";
        for(int i=0; i<size; i++){
            cout<<array[i]<<" ";
            }
            return 0;

}