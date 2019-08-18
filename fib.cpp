#include <iostream>
using namespace std;
int main()
{
    int n,s1=1,s2 =1,nt=0,i;
    cin >> n;
    for (i = 1; i <= n; ++i)
    {
        if(i == 1)
        {
            cout << s1<< " ";
            continue;
        }
       if(i == 2)
        {
            cout << s2 << " ";
            continue;
        }
        nt = s1 + s2;
        s1 = s2;
        s2 = nt;

        cout << nt << " ";
    }
    return 0;
}
