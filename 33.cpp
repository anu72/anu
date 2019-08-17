#include<iostream>
using namespace std;
int main()
{
 string t;
 getline(cin,t);
 int c=0;
 for(int i=0;i<t.length();i++)
 {
     if(t[i]==' ')
        c++;

 }
 cout<<c;
}
