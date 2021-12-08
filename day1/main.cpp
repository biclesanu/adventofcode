#include <iostream>
#include <fstream>

using namespace std;

ifstream f("input.in");

int main()
{
    int a[2001];
    int A[2001];
    int sum=0;
    int n=0;
    int i=1;
    int N=0;

    while(f>>a[i])
    {
       i++;
       n++;
    }

   for(int i=1;i<=n;i++)
   {
       A[i]=a[i]+a[i+1]+a[i+2];
       N++;

   }

   for(int i=1;i<=N;i++)
   {
       if(A[i+1]>A[i])
          sum++;
   }

   cout<<sum;

}
