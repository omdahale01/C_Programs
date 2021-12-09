#include<stdio.h>
#include<conio.h>
#include<time.h>
 
void main()
{
    int A[10]={'O','m','D','a','h','a','l','e'},i,a=1;
do{
	sleep(1);
    for (i = 0; i <= 8; i++)
    {
       printf("%c ",A[i]);
       sleep(1);
    }
    printf("If continue press 1\n");
    scanf("%d",&a);  
}while(a==1);


getch();
}
