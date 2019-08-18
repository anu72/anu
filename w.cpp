#include<iostream>
using namespace std;
int main()
{
    string q;
    getline(cin,q);
    int z=1;
    for(int i=0;i<q.length();i++)
    {
        if(q[i]==' ' && q[i+1]!=' ')
        {
            z++;
        }
    }
    cout<<z;
    return 0;
}
