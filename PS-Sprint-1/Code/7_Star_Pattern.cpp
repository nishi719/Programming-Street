/*
7. **Crafting Star Patterns**  
   **Difficulty**: Easy  
   **Topics**: Basic Programming, Patterns  
   **Description**: Write a program to create different star patterns (e.g., pyramid, diamond).  
   **Example**:  
   Input: `patternType = "pyramid", height = 5`  
   Output:  
   ```
       *
      ***
     *****
    *******
   *********
   ```  
   Explanation: A pyramid pattern with a height of 5 is generated.
*/
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter height : ";
    cin>>n;

    for(int i = 0 ; i<n;i++){
        for(int j = 0 ; j<n-i-1;j++){
            cout<<" ";
            }
            for(int k = 0 ; k<2*i+1;k++){
                cout<<"*";
                }
                cout<<"\n";
                }
                return 0;

    }


