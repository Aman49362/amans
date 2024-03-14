#include<iostream.h>
using namespace std;
#include<string>

int reverse(char st[],int);

void main()
{
    char str[80];
    clrscr();
    cout<<"Enter the string : ";
    cin.getline(str,80);
    int len=strlen(str);
    reverse(str,len);
    getch();
    return 0;
}

int reverse(char str1[],int length)
{
    int mid=length/2;
    length--;
    for(int i=0;i<mid;i++)
    {
        char temp=str1[i];
        str1[i]=str1[length];
        str1[length]=temp;
        length--;
    }
    cout<<"\t\t Reverse of the string is : ";
    cout<<str1;
    return 0;
}