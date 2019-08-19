#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int a[10000],n,i,s=0,d;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
   for(i=0;i<n;i++)
   {
     s=s+a[i];
     d=s/n;
   }
   cout<<d;
    return 0;
}
