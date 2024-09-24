/*
32. **Finding the Median of an Array**  
    **Difficulty**: Medium  
    **Topics**: Arrays, Sorting  
    **Description**: Write a program to find the median of an array of numbers.  
    **Example**:  
    Input: `array = [3, 1, 2, 4, 5]`  
    Output: `3`  
    Explanation: The median of the sorted array [1, 2, 3, 4, 5] is 3
*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array :";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements : ";
    for(int i = 0;i<n ;i++){
        cin>>arr[i];
    }
    int temp;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                }
            }
        }
        int mid = n/2;
        cout<<"Median of given array is : ";
        if(n%2==0){
            cout<<(arr[mid-1]+arr[mid])/2.0;
        }
        else{
            cout<<arr[mid];
        }
        
    return 0;
}



