#include<iostream>
using namespace std;

int main()
{
    int a,b,c;

    cout<<"\n\tEnter the numbers of your choice: ";
    
    cout<<endl;
    cout<<"\n\tEnter first number: ";
    cin>>a;
    
    cout<<endl;
    cout<<"\n\tEnter second number: ";
    cin>>b;
    
    cout<<endl;
    cout<<"\n\tEnter third number: ";
    cin>>c;
    cout<<endl;
    
    if(a=b)
    {
        cout<<"\n\t All the numbers are equal"<<endl;
    }

    else if(a<b)
    {
        if(a<c)
        {
            cout<<"\n\t The smallest number is: "<<a;
        }
    }

    else if(b<a)
    {
        if(b<c)
        {
            cout<<"\n\t The smallest number is: "<<b;
        }
    }

    else
    {
        cout<<"\n\t The smallest number is: "<<c;
    }

    return 0;
}