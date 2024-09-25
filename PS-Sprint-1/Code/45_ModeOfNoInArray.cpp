/*
45. **Finding the Mode of Numbers in an Array**  
    **Difficulty**: Medium  
    **Topics**: Arrays, Statistical Analysis  
    **Description**: Write a program to find the mode (most frequent number) in an array.  
    **Example**:  
    Input: `array = [1, 2, 2, 3, 4, 4, 4]`  
    Output: `4`  
    Explanation: The most frequent number in the array is 4. 

*/
#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter size of array :";
    cin>>size;
    int arr[size];
    cout<<"Enter element of array : ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int max_count = 0, mode = 0;
    for(int i=0;i<size;i++){
        int count = 0;
        for(int j=0;j<size;j++){
            if(arr[i] == arr[j]) count++;
            }
            if(count > max_count){
                max_count = count;
                mode = arr[i];
        }
    }
    cout<<"Mode of array is "<<mode;
    

}