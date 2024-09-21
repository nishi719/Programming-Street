/*
23. **Finding the Fibonacci Number at a Specific Position**  
    **Difficulty**: Easy  
    **Topics**: Basic Programming, Sequences  
    **Description**: Write a program to find the Fibonacci number at a specific position.  
    **Example**:  
    Input: `position = 5`  
    Output: `5`  
    Explanation: The Fibonacci number at position 5 is 5 (sequence: 0, 1, 1, 2, 3, 5). 

*/
#include<iostream>
using namespace std;
int main(){
    int a =0 ,b=1,temp,pos;
    cout<<"Enter the postion :";
    cin>>pos;
    if(pos==1)
    cout<<a;
    else if(pos==2)
    cout<<b;
    else
    {
       for(int i=2;i<pos;i++)
       {
        temp=a+b;
        a=b;
        b = temp;
        }
        }
        cout<<b;
        return 0;


    }

