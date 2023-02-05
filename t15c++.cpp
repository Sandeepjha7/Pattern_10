//Q(1.)
/*    1234554321
      1234**4321
      123****321
      12******21
      1********1
*/
// Enter n=5 to print this pattern. 
#include<iostream>
using namespace std;
int main()
{
    int n=5;
    int i=1;
    while (i<=n)
    {
        int j=1;
        while (j<=n+1-i)
        {
            cout<<j;
            j++;
        }
        int k=0;
        while (k<i-1)
        {
            cout<<"*";
            k++;
        }
        int start=0;
        while (start<i-1)
        {
            cout<<"*";
            start++;
        }
        int p=1;
        int count=6-i;
        while (p<=n+1-i)
        {
            cout<<count;
            count--;
            p++;
        }
        cout<<endl;
        i++;
    } 
}