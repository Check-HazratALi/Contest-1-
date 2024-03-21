#include<iostream>
using namespace std;

int main()
{
    float a,b,c,m,x;
    cin>>a>>b;
    m=(a/100);
    c=(m*b)/(1-m);
    x=c+b;
    cout<<x;
    return 0;
}