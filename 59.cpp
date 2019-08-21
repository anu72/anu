#include<iostream>
using namespace std;
int main()
{

        int x,v=0;
        cin>>x;
        while(x!=0)
        {
            x=x/10;
            v++;
        }
        cout<<v;

        return 0;
}
