#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    int c=0,i;
    char  a[100];
    gets(a);
    for(i=0;i<strlen(a);i++)
    {
        if(a[i]=='  ')
        {
             c--;

        }
        else if(a[i]!=' ')
        {
            c++;
        }

    }
    cout<<c;
    return 0;
}
