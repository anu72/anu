#include<iostream>
using namespace std;
int main()
{

	int a, b, i, j, count=0;
    cin>>a>>b;

	for(i=a+1; i<b; i++)
	{
		count=0;
		for(j=2; j<i; j++)
		{
			if(i%j==0)
			{
				count++;
				break;
			}
		}
		if(count==0)
		{
			cout<<i<<" ";
		}
	}
	return 0;
}
