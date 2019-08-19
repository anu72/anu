#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int a[10000],n,i;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    cout<<a[0]<<" "<<a[i-1];

    return 0;
}
