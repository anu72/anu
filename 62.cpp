#include<iostream>
using namespace std;
int main()
{
  string q;
  getline(cin,q);
  int i,o=0,p=0;
  for(i=0;i<q.length();i++)
  {
      if((q[i]=='0')|| (q[i]=='1'))
        {
            o++;
        }
        else
        {
            p++;
        }



  }
  if(o>1 && p<1)
  {
      cout<<"yes";
  }
  else
  {
      cout<<"no";
  }
}
