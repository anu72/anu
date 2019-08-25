#include<iostream>
using namespace std;
int main()
 {
    string g;
    getline(cin,g);
    int i=0,j,k=1;
    j=g.length()-1;
    while(i<j)
    {
        if(g[i]!=g[j])
          {
        k=0;
        break;
          }
    i++;
    j--;
}
 if(k)
 {
     cout<<"yes";
 }
 else
 {
     cout<<"no";
 }
 return 0;
 }
