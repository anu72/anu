#include<iostream>
using namespace std;
int main()
 {
    string f;
    getline(cin,f);
    int i,d=0;
    for(i=0;i<f.length();i++)
    {
        if((f[i]=='a')||(f[i]=='e')||(f[i]=='i')||(f[i]=='o')||(f[i]=='u'))
        {
            d++;
        }
    }
    if(d==1||d>1)
    {
        cout<<"yes";
    }
    else
    {
        cout<<"no";
    }
     return 0;
}
