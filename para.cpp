#include<iostream>
using namespace std;
int main()
{
    string j;
    getline(cin,j);
    int k=1;
    for(int i=0;i<j.length();i++)
    {
        if(j[i]== '.')
        {
            k++;
        }
    }
    cout<<k;
    return 0;
}
