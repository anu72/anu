#include<iostream>
using namespace std;
int main()
{
    int r,n,t,s=0;
    cin>>n;
    t=n;
    while(n!=0)
    {
        r=n%10;
        s=s+(r*r*r);
        n=n/10;
    }
    if(t==s)
    {
        cout<<"yes";
    }
    else
        {
          cout<<"no";

        }
    return 0;
}
