#include<iostream>
using namespace std;
int main()
{
  int N,K,i,s=0;
  cin>>N>>K;
  int a[N];
  for(i=1;i<=N;i++)
  {
    cin>>a[i];
  }
  for(i=1;i<=K;i++)
  {
    s=s+a[i];
  }
  cout<<s;
  return 0;
}
