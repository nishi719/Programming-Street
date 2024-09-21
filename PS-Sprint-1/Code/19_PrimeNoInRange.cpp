/*
19. **Finding Prime Numbers in a Range**  
    **Difficulty**: Easy  
    **Topics**: Basic Programming, Number Theory  
    **Description**: Write a program to find all prime numbers within a given range.  
    **Example**:  
    Input: `range = [10, 30]`  
    Output: `[11, 13, 17, 19, 23, 29]`  
    Explanation: Prime numbers between 10 and 30 are 11, 13, 17, 19, 23, and 29.  

*/
#include<iostream>
using namespace std;
int main(){
    int start,end;
    cout<<"Enter start  of the range :";
    cin>>start;
    cout<<"Enter end  of the range :";
    cin>>end;
    cout<<"\nPrime No between "<<start<<" and "<<end<<" is : "<<endl;
    for(int i=start;i<=end;i++){
        int count=0;
        for(int j=1;j<=i;j++){
            if(i%j==0)
            count++;
            }
            if(count==2)
            cout<<i<<" ";
            }
            return 0;


}