#include<iostream>
using namespace std;
int main()
{

        int n,k,i,h=0;
        cin>>n>>k;
        int a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(i=0;i<n;i++)
        {
            if(k==a[i])
            {
                h++;
            }

        }
        cout<<h;
        return 0;
}
