#include<iostream>
using namespace std;
int main()
{
    long long a,b,c,mini,ans;
    cin>>a>>b>>c;
    mini=min(a,min(b,c));
    ans=mini;
    a=a-mini;
    b=b-mini;
    c=c-mini;
    mini=min(a/2 , c);
    ans=ans+mini;
    cout<<ans;
    return 0;

}