#include <stdio.h> 
#include <math.h>
#include <conio.h> 
int hanoi(int n); 

void main(void){

 int resultado;
 int n; printf("\nNumero de discos: ");
  scanf("%d",&n);
  printf("\nLos movimientos a realizar son: \n"); 
  resultado=hanoi(n); 
   printf("\nvalor:%d",resultado);
  } 
  
  
  int hanoi(int n){
  int x;   
   if(n==1){ 
   
   return 1;
   
    } 
	else
	{
  
	 x=hanoi(n-1)*2+1;



	  }
	  
	    return x;
	   }

