#include<iostream>
using namespace std;
int main()
{
int a;
cin>>a;
if(a<0)
{
cout<<"invalid";
}
else if(a%2!=0)
{
cout<<"odd";
}
else if(a%2==0)
{
cout<<"even";
}
return 0;
}
