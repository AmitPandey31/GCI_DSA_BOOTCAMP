#include <iostream>
#include <conio.h>
using namespace std;

void displayEvenOdd(int num, int limit)
{
    if(num>limit)
        return;
    cout<<num<<endl;
    displayEvenOdd(num + 2, limit);
}

int main()
{
    int lowerLimit, upperLimit;
    cout<<"Enter your lower limit\n";
    cin>>lowerLimit;   
    cout<<"Enter your upper limit\n";
    cin>>upperLimit;    
    cout<<"Even/odd numbers from "<<lowerLimit<<" to "<<upperLimit<<endl;
    displayEvenOdd(lowerLimit, upperLimit);
    getch();
    return 0;
}
