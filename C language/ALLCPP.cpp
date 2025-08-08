/*#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n,i,a[i],j,sum=0,finally;
    cin>>n;
    for(i=0;i<n;i++)
    {
      cin>>a[i];
      sum+=a[i];
    }
    
    cout<<sum<<endl;
    finally=sum/n;
    cout<<finally;
} */


//codeforce problem name even odd
/*#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
   long int i,j,n,k,count=0;
   cin>>n>>k;
    for(i=1;i<=n;i=i+2)
    {
        if(i%2!=0)
        {
            count++;
          if(count==k)
          {
            goto read;
          }
        }
    }
    for(i=2;i<=n;i=i+2)
    {
        count++;
        if(count==k)
        {
          break;
        }
    }
    read:

    cout<<i;

}*/
/*#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
  int n,i;
  cin>>n;
  for(i=1;i<=n;i++)
  {
    if(i%2!=0)
    {
      printf("I hate ");
      if(i<n)
      {
        printf("that ");
      }
    }
    else
    {
      printf("I love ");
      if(i<n)
      {
        printf("that ");
      }
    }
  }
  printf("it");
}*/

//Anisul islam cpp class:58 guessing game
/*#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
   int randomnumber ,guessingnumber;
    cout<<"enter any number";
    cin >> guessingnumber;
    randomnumber = 1 + rand()%5;
    if(randomnumber==guessingnumber)
    {
      cout<<"you have won";
    }
    else
    {
     cout<<"you lost"<<endl;
     cout<<randomnumber;
    }
}*/


//Anisul islam cpp class:59 passing array to function

/*#include<iostream>
#include<conio.h>
using namespace std;

void sum(int x,int y)
{
  int add = x+y;
  cout<<add<<endl;
}
void sum(int x,int y,int z)
{
  int add = x+y+z;
  cout<<add<<endl;
}
int main()
{
  sum(10,20);
  sum(10 ,20,30);
  getch();
}*/

//cpp class: 60 Topic: passing array to function
/*#include<iostream>
#include<conio.h>
using namespace std;

void displayarray(int num,int size)
{
 for(int i=0;i<=size;i++)
 {
  cout<<num[i]<<" ";
 }

 int main()
 {
  int number[5]={10,20,30,40,50,60};
  displayarray(number,5);
  getch();
 }
}*/
//cpp class: 64 string input 

/*#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
  char name[20];
  cout << "Enter your name ";
  gets(name);

  cout <<"welcome "<<name;
  getch();
}
*/

//cpp class : 65 scope resolution operator
#include<iostream>
#include<conio.h>
using namespace std;\
int x=20; //global variables
int main()
{
  int x = 10;
  cout << x <<endl;
  // x it indicates local variables 
  cout << ::x <<endl;
  // ::x it indicates global variables 
  //(::)it called scopes resulation operators
  getch();


}
    
