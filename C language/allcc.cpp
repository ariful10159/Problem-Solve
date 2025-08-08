#include<iostream>
//#include<stdlb.h>
#include<conio.h>
using namespace std;
int main()
{

    for(int i=0;i<5;i++)
    {
      int randomnumber = rand()%5+1;
      cout<<"Random Number = "<<randomnumber<<endl;
    }
}