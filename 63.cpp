#include<iostream>
using namespace std;
int main()
{
  int min,r=3;
  int w[r],i;
  for(i=0;i<10;i++)
  {
      cin>>w[i];
  }
  min=w[0];
  for(i=0;i<10;i++)
  {
      if(min>w[i])
      {
          min=w[i];
      }
  }
  cout<<min;
  return 0;

}
