#include<stdio.h>
#include<string.h>
int main()
{	
  char a[50];
  int n,b,i;
  scanf("%s",&a);
  n=strlen(a);
  for(i=0;i<=n;i++)
 {
  if(a[i]>='0'&&a[i]<='9')
 {
  printf("%c",a[i]);
  }
  }
  getch();
	return 0;
}
