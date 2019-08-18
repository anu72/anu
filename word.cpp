#include<iostream>
using namespace std;
int main()
{
    string p;
    getline(cin,p);
    int r=0;
    for(int i=0;i<p[i]!='\0';i++)
    {
        if(p[i]==' ' && p[i+1]!=' ')
        {
            r++;
        }
    }
    cout<<r;
    return 0;
}
