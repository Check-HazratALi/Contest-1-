#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n ;
    int a=n/10;
    int b = n % 10;
    if (b==0)
    {
        cout<<"YES";
    }
    
    else if (a%b==0 || b%a==0)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}