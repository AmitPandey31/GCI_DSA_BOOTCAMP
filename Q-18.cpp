#include <iostream>
using namespace std;

int hailstone (int n) {
if (n == 1)
{
return 1;
}
else 
{
if (n%2 != 0) {
n = 3*n + 1;
cout << n << endl;
}
else {
n = n/2;
cout << n << endl;
}
return hailstone(n);
}}

int main (){
int N = 0;
cout << "Input an integer: ";
cin >> N;
cout << "The updated values of n are: \n";
return hailstone(N);
}