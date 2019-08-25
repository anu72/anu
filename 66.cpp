#include<iostream>
using namespace std;

int main()
 {
     int u,i,t=0;
     cin>>u;
     if(u==0)
     {
         cout<<"nO";
     }
     else
     {
         for(i=2;i<u;i++)
         {
             if(u%i==0)
             {
                 t++;
             }
         }
     }
     if(t>1)
     {
         cout<<"no";
     }
     else
     {
         cout<<"yes";
     }
     return 0;
}
