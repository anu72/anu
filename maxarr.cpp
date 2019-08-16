#include<iostream>
using namespace std;
int main()
{
    int a[100000],max,i,n;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    max=a[0];
    for(i=0;i<n;i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
    }
    cout<<max;
    return 0;
}
