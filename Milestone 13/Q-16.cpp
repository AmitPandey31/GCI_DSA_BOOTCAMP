#include <iostream>  
#include <math.h>

using namespace std;  

int reverseNumber(int num){
    int digits = (int) log10(num);
 
    // Base condition
    if(num == 0)
        return 0;
 
    return ((num%10 * pow(10, digits)) + reverseNumber(num/10));
}

int main(){  
    int num,rev,sum=0,temp;  

    cout<<"Enter the Number: ";    
    cin>>num;  

    rev = reverseNumber(num);  
   
    if(num==rev)    
        cout << num << " is a Palindrome Number." << endl;    
    else    
        cout << num << " is not a Palindrome Number." << endl;   

    return 0;  
}  