#include<iostream>
using namespace std;
int main()
{
    int a[100000],n,i,av=0,s;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];

    }

    for(i=0;i<n;i++)
    {
        av=av+a[i];

    }
    s=av/n;
    cout<<s;
    return 0;
}
