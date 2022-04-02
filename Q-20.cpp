#include<iostream>
#include <ctype.h>
using namespace std;
 
char first(string str, int i=0)
{
    if (str[i] == '\0')
         return 0;
    if (isupper(str[i]))
            return str[i];
    return first(str, i+1);
}
 

int main()
{
    string str = "amitKumaR";
    char res = first(str);
    if (res == 0)
        cout << "No uppercase letter";
    else
        cout << res << "\n";
    return 0;
}