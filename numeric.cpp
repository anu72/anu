#include<iostream>
using namespace std;
int main()
{
    string x;
    getline(cin,x);
    int y=0;
    for(int i=0;i<x.length();i++)
    {
        if(isdigit(x[i]))
        {
            y++;
        }
    }
    cout<<y;
    return 0;
}
