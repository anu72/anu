#include <iostream>
#include <string>
#include<cstdio>
using namespace std;
int main()
{
    char ch[1000];
    int i,c=0;
    gets(ch);
    for(i=0;ch[i]!='\0';i++)
    {
        if(ch[i]==' ')
        {
            c++;
        }
    }
    cout<<c;
 return 0;
}
