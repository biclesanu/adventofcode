#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

ifstream f("input.in");

char s[1001][13];
int nr;
int zero,one;
int oxi[13], co2[13];
int o,c;

void read()
{
    while(f.getline(s[nr],13))
        nr++;
}


int valid(int j, int i)
{
    for(int c=0; c<j; c++)
    {
        if(oxi[c]!=s[i][c]-'0')
            return 0;
    }
    return 1;

}


void buildoxi(int i)
{
    if(one==1 && zero==0)
        oxi[i]=0;
    else
     if(zero==1 && one==0)
        oxi[i]=1;
else{

    if(zero>one)
        oxi[i]=0;
    else
        oxi[i]=1;
}
}


void oxygen()
{

    for(int j=0; j<12; j++)
    {
        for(int i=0; i<1000; i++)
        {

            if(j==0 || valid(j,i))
            {
                if(s[i][j]=='0')
                    zero++;
                else
                    one++;

            }

        }

        buildoxi(j);


        zero=0;
        one=0;
    }

}

int valid2(int i, int j)
{
    for(int c=0; c<j; c++)
        if(co2[c]!=s[i][c]-'0')
            return 0;
    return 1;

}

void buildco2(int i)
{
    if(one==1 && zero==0)
        co2[i]=1;
    else
     if(zero==1 && one==0)
        co2[i]=0;

    else
    {
        if(one<zero)
            co2[i]=1;
        else
            co2[i]=0;
    }


}

void carbondioxide()
{

    for(int j=0; j<12; j++)
    {
        for(int i=0; i<1001; i++)
        {
            if(j==0 || valid2(i,j))
            {
                if(s[i][j]=='0')
                    zero++;
                else
                    one++;
            }
        }
        buildco2(j);
        zero=0;
        one=0;

    }

}


void BinaryToDecimal()
{
    int f=1;
    for(int i=11; i>=0; i--)
    {
        o=o+f*oxi[i];
        c=c+f*co2[i];
        f=f*2;
    }


}

int main()
{
    read();
    oxygen();
    carbondioxide();
    BinaryToDecimal();

    cout<<o*c;

}
