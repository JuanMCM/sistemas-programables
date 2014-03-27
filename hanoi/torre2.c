#include <stdio.h> 
#include <conio.h> 
void hanoi(int n,char fuente, char aux, char destino); 

void main(void){

 char fuente='A'; 
 char aux='B'; 
 char destino='C'; 
 
 int n; printf("\nNumero de discos: ");
  scanf("%d",&n);
printf("\n\nLos movimientos a realizar son: \n"); 
  hanoi(n,fuente,aux,destino); 
 
  } 
  
  
  void hanoi(int n,char fuente, char aux, char destino){
   if(n==1){ 
   printf("\n%c",fuente);
   
   printf("%c",destino);
    } 
	else
	{
	 hanoi(n-1,fuente,destino,aux);
	 printf("\n%c",fuente);
   
   printf("%c",destino); 
	 hanoi(n-1,aux,fuente,destino);
	  }
	   }

