#include<iostream>
using namespace std;
int main()
{
    string x;
    getline(cin,x);
    int l=0,v=0;
    for(int i=0;i<x.length();i++)
    {
        if(isdigit(x[i]))
        {
            l++;
        }
       else if(isalpha(x[i]))
        {
            l++;
        }
        else if(isspace(x[i]))
        {
            l++;
        }
        else
        {
            v++;
        }
    }
    cout<<v;
    return 0;
}
