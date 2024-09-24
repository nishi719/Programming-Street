/*
35. **Finding the Sum of Prime Numbers in a Range**  
    **Difficulty**: Medium  
    **Topics**: Number Theory, Mathematical Computations  
    **Description**: Write a program to calculate the sum of all prime numbers within a given range.  
    **Example**:  
    Input: `range = [1, 10]`  
    Output: `17`  
    Explanation: The sum of prime numbers between 1 and 10 is 2 + 3 + 5 + 7 = 17.  

*/
#include<iostream>
using namespace std;
int main(){
    int start ,end;
    cout<<"Enter start of range :";
    cin>>start;
    cout<<"Enter end of range :";
    cin>>end;
    
    cout<<"Prime no between range of "<<start << " and "<<end<<" is : "<<endl;
    for(int i= start ; i<=end ;i++){
        int count =0;
        for(int j=2 ; j<i ; j++){
            if(i%j==0)
            count++;
            }
    if(count==0)
    cout<<i<<" ";
    }
    cout<<"\n\nSum of prime numbers in the range is : ";
    int sum =0;
    for(int i= start+1 ; i<=end ;i++){
        int count =0;
        for(int j=2 ; j<i ; j++){
            if(i%j==0)
            count++;
            }
            if(count==0)
            sum+=i;
            }
            cout<<sum;


    }
