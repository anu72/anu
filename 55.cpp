#include<iostream>
using namespace std;
int main()
{
    int n,m,p;
    cin>>n>>m;
    p=m*n;
    if(p%2==0)
    {
        cout<<"even";
    }
    else if(p%2!=0)
    {
        cout<<"odd";
    }
    return 0;
}
