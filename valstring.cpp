#include<iostream>
using namespace std;
int main()
{
  string a;
  int i,c=0;
  cin>>a;
  for(i=0;i<a.length();i++)
  {
      if(isdigit(a[i])!=0)
     {
         c=1;
     }
     else

        {
           c=0;

        }
  }
  if(c==1)
  {
      cout<<"yes";
  }
  else
    {
        cout<<"no";

  }

  return 0;
}

