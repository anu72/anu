#include<iostream>
using namespace std;
int main()
{

        int n,y,i,l=0;
        cin>>n>>y;
        int p[n];
        for(i=0;i<n;i++)
        {
            cin>>p[i];
        }
        for(i=0;i<n;i++)
        {
            if(y==p[i])
            {
                l++;
            }
        }
        if(l==1)
        {
            cout<<"yes";
        }
        else
        {
            cout<<"no";
        }

        return 0;
}
