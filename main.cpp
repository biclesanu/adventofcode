#include <iostream>
#include <fstream>

using namespace std;

ifstream f("input.in");

int main()
{
    int a[2001];
    int s=0;
    int n=0;
    int i=1;

    while(f>>a[i])
    {
       i++;
       n++;
    }

   for(int i=1;i<n;i++)
   {
       if(a[i+1]>a[i])
         s++;
   }

   cout<<s;

}
