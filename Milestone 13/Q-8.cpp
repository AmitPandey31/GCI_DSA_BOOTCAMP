#include <iostream>
using namespace std;
 

int Max(int A[], int n)
{
       if (n == 1)
       return A[0];
       return max(A[n-1], Max(A, n-1));
}
 
int main()
{
    int A[] = {1, 4, 45, 6, -50, 10, 2};
    int n = sizeof(A)/sizeof(A[0]);
    cout <<  Max(A, n);
    return 0;
}