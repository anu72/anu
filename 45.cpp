#include<iostream>
using namespace std;
int main()
{
    int m,b=0;
    cin>>m;
    while(m>0)
    {
        m/=10;
        b++;
    }
    cout<<b;

return 0;
}
