#include<iostream>
using namespace std;
int main()
{
    int n,r,s,t,a,b;
    cin>>a>>b;

    for(n=a+1;n<b;n++)
    {
      t=n;
      s=0;

    while(t!=0)
    {
        r=t%10;
        s=s+(r*r*r);
        t=t/10;
    }
    if(s==n)
    {
        cout<<n<<" ";
    }
    }

    return 0;
}
