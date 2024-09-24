/*
31. **Generating a Pascal’s Triangle**  
    **Difficulty**: Medium  
    **Topics**: Arrays, Mathematical Computations  
    **Description**: Write a program to generate Pascal's Triangle up to a given number of rows.  
    **Example**:  
    Input: `rows = 4`  
    Output:  
    ```
    1  
    1 1  
    1 2 1  
    1 3 3 1  
    ```  
    Explanation: Pascal's Triangle with 4 rows is generated. 
*/
#include<iostream>
using namespace std;

int main(){
  int rows;
  cout<<"Enter no of rows :";
  cin>>rows;
  int arr[rows][rows];

  
  for(int i=0;i<rows;i++){
    for(int j=0;j<=i;j++){
        if(j==0 || j==i)
        arr[i][j]=1;
        else
        arr[i][j]=arr[i-1][j-1]+arr[i-1][j];
        }
  }
  for(int i=0;i<rows;i++){
    for(int j=0;j<=i;j++){
        cout<<arr[i][j]<<" ";
        }
        cout<<endl;

  }

}