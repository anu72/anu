#include<iostream>
using namespace std;
int main()
{
    int r,u=0,i,d;
    cin>>r;
    while(r>0)
    {
        d=r%10;
        u=u+d;
        r/=10;
    }
   
    cout<<u;
    return 0;
}
