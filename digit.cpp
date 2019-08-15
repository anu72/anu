#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
   int d,c=0;
   cin>>d;
   while(d>0)
   {
     d=d/10;
     c++;
   }
   cout<<c;
return 0;
}
