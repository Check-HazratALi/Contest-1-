#include<iostream>
using namespace std;

int main()
{
    char a;
    cin>>a;
    if (a>='a' && a<='y')
    {
        a=a+1;
        cout<<a;
    }
    else if (a=='z')
    {
        a=a-25;
        cout<<a;
    }
    
    return 0;
    
}