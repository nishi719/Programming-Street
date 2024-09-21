/*
17. **Checking for Armstrong Numbers in a Range**  
    **Difficulty**: Easy  
    **Topics**: Basic Programming, Number Theory  
    **Description**: Write a program to find all Armstrong numbers within a given range.  
    **Example**:  
    Input: `range = [1, 500]`  
    Output: `[1, 153, 370, 371, 407]`  
    Explanation: Armstrong numbers between 1 and 500 are 1, 153, 370, 371, and 407. 
g
*/
#include<iostream>
#include<cmath>
using namespace std;

int count_digit(int n){
    int count = 0;
    while(n){
        count++;
        n /= 10;
    } 
    return count;
}

void ArmstrongNo(int first, int end){
    for(int i = first; i <= end; i++){
        int temp = i;
        int n = count_digit(temp);
        int sum = 0; 

        while(temp){
            sum += pow(temp % 10, n); 
            temp /= 10;
        }

        if(sum == i) 
            cout << i << " ";
    }
}

int main(){
    int start, end;
    cout << "Enter the start of the range: ";
    cin >> start;
    cout << "Enter the end of the range: ";
    cin >> end;
    cout<<"\nArmstrong No between "<<start<<" and "<<end<<" is : "<<endl;
    ArmstrongNo(start, end);

    return 0;
}
