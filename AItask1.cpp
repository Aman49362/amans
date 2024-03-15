// A simple program that takes a user's name as input and then greets the user with a personalized message

#include <iostream>
using namespace std;

int main()
{
    string name;
    cout<<"Please enter your name here: ";
    cin>>name;
    cout<<"Hello "<<name<<" nice to meet you"<<endl;
    return 0;
}