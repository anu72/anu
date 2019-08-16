#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int h1,h2,m1,m2;
    cin>>h1>>m1;
    cin>>h2>>m2;
    int hr,mr;
    hr=abs(h1-h2);
    mr=abs(m1-m2);
    cout<<hr<<" "<<mr;
    return 0;


}
