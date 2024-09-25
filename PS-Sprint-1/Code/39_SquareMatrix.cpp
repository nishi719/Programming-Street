/*
39. **Generating a Square Matrix of a Given Size**  
    **Difficulty**: Medium  
    **Topics**: Arrays, Matrix Operations  
    **Description**: Write a program to generate a square matrix of a given size and fill it with sequential numbers.  
    **Example**:  
    Input: `size = 3`  
    Output:  
    ```
    1 2 3  
    4 5 6  
    7 8 9  
    ```  
    Explanation: A 3x3 matrix is generated with sequential numbers. 
*/
#include<iostream>
using namespace std;

int main(){
    int size;
    cout<<"Enter size of array";
    cin>>size;
    int count = 1;

    int arr[size][size];
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            arr[i][j]=count;
            count++;
        }
    }
        for(int i=0;i<size;i++){
            for(int j=0;j<size;j++){
                 cout<<arr[i][j]<<"  ";
        }
        cout<<endl;
    }
    return 0;
}
