/*
27. **Generating a Pattern of Numbers**  
    **Difficulty**: Easy  
    **Topics**: Basic Programming, Patterns  
    **Description**: Write a program to generate number patterns (e.g., sequential numbers in a matrix).  
    **Example**:  
    Input: `rows = 3`  
    Output:  
    ```
    1  
    2 3  
    4 5 6  
    ```  
    Explanation: A number pattern with 3 rows is generated.
*/
#include<iostream>
using namespace std;

int main(){
    int rows,num=1;
    cout<<"Enter no of rows :";
    cin>>rows;

    for(int i = 1; i <= rows; i++) {
        for(int j = 1; j <= i; j++) {
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
}