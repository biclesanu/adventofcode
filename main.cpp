#include <iostream>
#include <fstream>
#include <cstring>
#include <cmath>

using namespace std;

ifstream f("input.in");

int a[12],zero[12],one[12],gamma[12],epsilon[12];
int G,E;

int main()
{
    long long n;
    for(int i=1; i<=1000; i++)
    {
        f>>n;
        for(int i=12; i>=1; i--)
        {
            a[i]=n%10;

            if(a[i]==0)
            {
                zero[i]=zero[i]+1;
            }

            if(a[i]==1)
            {
                one[i]=one[i]+1;
            }

            n=n/10;
        }

    }


    for(int i=1;i<=12;i++)
    {
        if(zero[i]>one[i])
            gamma[i]=0;
        else
            gamma[i]=1;
    }

    for(int i=1;i<=12;i++)
    {
        if(gamma[i]==0)
            epsilon[i]=1;
        else
            epsilon[i]=0;
    }


    int putere=0;
    E=0;
    for(int i=12;i>=1;i--)
    {
        E=E+(epsilon[i]*pow(2, putere));
        putere++;
    }

    putere=0;
    G=0;
    for(int i=12;i>=1;i--)
    {
        G=G+(gamma[i]*pow(2, putere));
        putere++;
    }

    cout<<G<<E;


}

/*
011101101110
010110001101
100111000110
*/
