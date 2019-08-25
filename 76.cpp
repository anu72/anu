#include<iostream>
using namespace std;
int main()
{
        int q,i, l=0;
        cin>>q;

        for(i=2;i<q;i++)
        {
                if(q%i==0)
                {
                        l++;
                        break;
                }
        }
        if(l!=0)
        {
                cout<<"yes";
        }
        else
        {
                cout<<"no";
        }
        return 0;
}
