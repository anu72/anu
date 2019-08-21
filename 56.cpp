#include<iostream>
#include<cctype>
using namespace std;
int main()
{
    int i,c=0,v=0;
   string s;
   getline(cin,s);
  for(i=0;i<s.length();i++)
   {
       if(isalpha(s[i]))
       {
           c++;
       }
       if(isdigit(s[i]))
       {
           v++;
       }

   }
   if(c>=1&& v>=1)
      {
          cout<<"Yes";
      }
      else
        {
            cout<<"No";
        }
        return 0;
}
