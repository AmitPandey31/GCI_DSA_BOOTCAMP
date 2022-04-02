#include<iostream>
using namespace std;
int PrintNaturalNumber(int n)
{
    if(n<=50)
    {
        cout<<" "<<n<<" ";
        PrintNaturalNumber(n+1);
    }
}
int main()
{
    int n=1;
    cout<<"First 50 Natural Numbers are:";
    PrintNaturalNumber(n);
}
