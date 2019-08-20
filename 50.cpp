#include<iostream>
using namespace std;
int main()
{
    int g;
    cin>>g;
    if(g>0)
    {
        while(g%2==0)
        {
            g/=2;
        }
        if(g==1)
        {
            cout<<"yes";
        }
    }
    if(g==0 || g!=1)
    {
        cout<<"no";
    }
    return 0;
}
