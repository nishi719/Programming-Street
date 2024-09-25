/*
47. **Generating a Number Pyramid**  
    **Difficulty**: Medium  
    **Topics**: Patterns, Basic Programming  
    **Description**: Write a program to generate a pyramid of numbers (e.g., 1, 12, 123, etc.).  
    **Example**:  
    Input: `rows = 4`  
    Output:  
    ```
    1  
    12  
    123  
    1234  
    ```  
    Explanation: A number pyramid with 4 rows is generated.  
*/
#include<iostream>
using namespace std;
int main(){
    int rows;
    cout<<"Enter rows :";
    cin>>rows;
    for(int i=1;i<=rows;i++){
        for(int j =1; j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}