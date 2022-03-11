#include<stdio.h>
int fun1(int space,int star);
int main()
{
  int n,space,star;
  printf("Give the number to draw * pyramid : ");
  scanf("%d",&n);
  space=n-1;
  star=1;
//  printf("%d",n);
  while(space >= 0)
  {
    printf("\n");
    fun1(space,star);
    space--;
    star+=2;
  }
  printf("\n\n");
  return 0;
}
int fun1(int space,int star)
{
  int i;
  int loop=space+star;
  for (i=1;i<=loop;i++)
  {
    if(space > 0)
    {
      printf(" ");
      space--;
      continue;
    }
    else
      printf("*");
  }
  return 0;
}

