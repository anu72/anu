#include <iostream>
using namespace std;
int main()
{
     int n, num, d, r = 0;
     cin >> num;
     n = num;
     do
     {
         d= num % 10;
         r= (r* 10) + d;
         num = num/ 10;
     } while ( num!= 0);

     if (n == r)
         cout << " yes";
     else
         cout << " no";
    return 0;
}
