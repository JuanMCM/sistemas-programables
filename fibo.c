

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
printf("ingresa numero :");
 int fibo;
  scanf("%d",&fibo);
  int y,z,cont;
int x=1;
  for (cont=1;cont<=fibo;cont++)
  {
      z=x+y;
      printf(" %d",z);
      x=y;
      y=z;
  }
 
  
  return 0;
}

