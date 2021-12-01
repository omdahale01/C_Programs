#include<stdio.h>
#include<windows.h>
#include<conio.h>
 
void main()
{
    int i,f=100,t=700;
    for(i=1;i<=10;i++)
    {
      Beep(f,t);
      f=f+100;
    }
//getch();
}
