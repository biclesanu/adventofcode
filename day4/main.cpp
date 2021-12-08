#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

ifstream f("input.in");

char numerebingo[300];
int arrays[605][15];
char sep[]=",";
int nr=1;
int nrb[100];

///muhahah i'm evil this changes everything
void readbingonr()
{
    int j=0;
    f.getline(numerebingo,300);
    for(int i=0; i<strlen(numerebingo); i++)
    {
        int nr=0;
        while(numerebingo[i]!=','&&i!=strlen(numerebingo))
        {
            nr=nr*10+(numerebingo[i]-'0');
            i++;
        }
        nrb[j++]=nr;
    }

    for(int i=0; i<j; i++)
        cout<<nrb[i]<<" ";
}
/*
void readarrays()
{

    while(f(arrays[nr],15))
        nr++;


    for(int i=0; i<603; i++)
    {
        for(int j=0; j<14; j++)
            cout<<arrays[i][j];
        cout<<endl;
    }

}

*/
int main()
{
    readbingonr();
//    readarrays();

}
