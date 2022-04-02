#include<iostream>
#include<cstring>
using namespace std;

void Copy_String(string str,char str1[],int i)
{
    str1[i]=str[i];
    if(str[i]=='\0')
        return;
    Copy_String(str,str1,i+1);
}

int main()
{
    string str;
    cout<<"Enter your String:";
    getline(cin, str);
    char str1[30]="";
    Copy_String(str,str1,0);
    cout<<"Copy Done..."<<endl;
    cout<<"Copy string is: "<<str1;

}