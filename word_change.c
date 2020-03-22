#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
  int n,a,i;
  char x[100];
  printf("Enter the character:");
  scanf("%s",x);
  n=strlen(x);
  if(n%2!=0)
  {
    a=n-1;
    x[a]='O';
    x[a-1]='O';
  }
  for(i=0;i<n;i++)
  {
    if(x[i]=='a')
    x[i]='u';
    if(x[i]=='i')
    x[i]='e';
  }
   printf("After changing %s",x);
   getch();
}
