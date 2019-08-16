#include<iostream>
using namespace std;
int main()
{
    int s =0,n,a,d;
    cin>>n>>a>>d;
    for (int i=0;i<n;i++)
    {
        s = s + a;
        a = a + d;
    }
    cout<<s;
    return 0;
}
