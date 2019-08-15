#include<iostream>
#include<cmath>
using namespace std;
int main()
{
  int N,K,i,p;
  cin>>N>>K;
  p=1;
  for(i=1;i<=K;i++)
    {
      p=p*N;
    }
  cout<<p;
  return 0;
  }
