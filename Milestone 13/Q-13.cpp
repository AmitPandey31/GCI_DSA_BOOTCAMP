#include<iostream>
using namespace std;

int lcm(int num1, int num2)
{
return (num1*num2)/gcd(num1,num2);
}

int main()
{
    int num1,num2;
    cout<<"Enter the Two Number:";
    cin>>num1>>num2;
    cout<<"Lcm :"<<lcm(num1,num2);
}