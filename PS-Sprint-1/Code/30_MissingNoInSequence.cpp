/*
30. **Finding Missing Numbers in a Sequence**  
    **Difficulty**: Easy  
    **Topics**: Basic Programming, Arrays  
    **Description**: Write a program to find missing numbers in a sequence from 1 to n.  
    **Example**:  
    Input: `sequence = [1, 2, 4, 5]`  
    Output: `[3]`  
    Explanation: The missing number in the sequence from 1 to 5 is 3.
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements in array starting from 1 to n : ";
    for(int i =0; i<=n ;i++){
        cin>>arr[i];
    }

    int count=1;
    for(int i= 0; i<n ;i++){
        
        if(count == arr[i])
        count++;

    }
    cout<<"Missing no between 1 to n  is : "<<count;
    
}