#include<stdio.h>
int fun1(int space,int printchar,int n);
int main()
{
  int n,space,printchar;
  printf("Give the number to draw number pyramid: ");
  scanf("%d",&n);
  space=n-1;
  printchar=1;
//  printf("%d",n);
  while(space >= 0)
  {
    printf("\n");
    fun1(space,printchar,n);
    space--;
    printchar+=2;
  }
  printf("\n\n");
  return 0;
}

int fun1(int space,int printchar,int n)
{
  int i,start=1;
  int loop=space+printchar;
  for (i=1;i<=loop;i++)
  {
    if(space > 0)
    {
      printf(" ");
      space--;
      continue;
    }
    else if(n > i)
    {
      printf("%d",start++);
      continue;
    }
    else
    {
     printf("%d",start--);
    }  
  }
  return 0;
}

