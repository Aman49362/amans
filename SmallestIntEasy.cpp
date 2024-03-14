#include <iostream>
using namespace std;

int main ()
{
    int a,b,c;
    cout<<"\n\t Enter the numbers of your choice\n";
    
    cout<<"\n\t Enter  number: ";
    cin>>a;
    
    cout<<"\n\t Enter  number: ";
    cin>>b;
    
    cout<<"\n\t Enter  number: \n";
    cin>>c;
    
    if (a==b==c)
    {
        cout<<"\n\t All the numbers are equal";
    }

    else if(a<b<c)
    {
        cout<<"\n\t The smallest number is: "<<a; 
    }

    else if(b<a<c)
    {
        cout<<"\n\t The smallest number is: "<<b; 
    }

    else
    {
        cout<<"\n\t The smallest number is: "<<c; 
    }

    cout<<endl;
    
    return 0;
}