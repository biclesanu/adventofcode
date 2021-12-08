#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

ifstream f("input.in");

int main()
{
    char v[12];
    char f[]="forward";
    char d[]="down";
    char u[]="up";
    int height=0, distance=0, aim=0;       ///forward 4

    for(int i=0;i<=1000;i++)
        {

           cin.getline(v,12);

           if((strstr(v,f)))
            {
                distance=distance+ ((int)v[8]-48);
                height=height+ ((int)v[8]-48)*aim;
            }


           if((strstr(v,d)))
             {

               aim=aim+((int)v[5]-48);

             }


            if((strstr(v,u)))
              {

                  aim=aim-((int)v[3]-48);
              }


        }

   cout<<height*distance;

}
