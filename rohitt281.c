#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c,i;
	scanf("%d %d",&a,&b);
	for(i=1;(i<=a)&&(i<=b);i++)
{
	if((a%i==0) && (b%i==0))     
{	
	c=i;
	}
}
printf("%d",c);
getch();
return 0;
}

