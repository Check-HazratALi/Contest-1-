#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    double a,b,c,f;
    cin>>a>>b>>c;
    double d=(a*b)/c;
    long long e=(a*b)/c;
    f=e-d;

    if (f>0)
    {
        cout<<"double";
    }
    
    else if ((a*b)/c<=2147483647)
    {
        cout<<"int";
    }
    else if ((a*b)/c<=9,223,372,036,854,775,807)
    {
        cout<<"long long";
    }
    return 0;
    
    
    

}