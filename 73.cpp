#include<iostream>
using namespace std;
int main()
 {
   int n,l,r,i,b=0;
   cin>>n>>l>>r;
   for(i=l;i<=r;i++)
   {
       if(n>l && n<=r)
          {
            b++;
          }
   }
   if(b>1)
   {
       cout<<"yes";
   }
   else
   {
       cout<<"no";
   }
 return 0;
 }
