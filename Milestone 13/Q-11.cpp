#include <iostream> 
using namespace std;

void decToBinary(int num1) 
{
    int remainder;
 
    num1 = num1 / 2;
    remainder = num1 % 2;
	
	if (num1 > 0)
	{
		decToBinary(num1);
		
	}
	else if (num1 = 0)
	{
		cout << "0";
		return;
	}
 	cout << remainder;  
}

int main() 
{
    int num1;
     cout << "Enter a non-negative integer value: ";
    cin >> num1;
   	if (num1 < 0)
	{
	cout << endl << "Invalid Entry." << endl << endl;
	}
	else 
	{
        cout << endl << "Decimal " << num1 << " = ";
        decToBinary(num1);
        cout << endl << endl;
        }

	return 0;
}
 
