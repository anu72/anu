#include <iostream>
using namespace std;

int main()
{
    int arr[100000];
    int i, j, t,n;

    cin>>n;


    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {

            if(arr[j] < arr[i])
            {
                t = arr[i];
                arr[i] = arr[j];
                arr[j] = t;
            }
        }
    }

    for(i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}
