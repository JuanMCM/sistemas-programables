#include<stdio.h>
void piramide (int x2){
	printf(" numero obtenido %d",x2);
printf("\n");
	
 int i;
 int x=1;
 
 for (i=0;i<=x2;i++){

 for (i=0;i<x;i++){
 
  
printf("*");
}printf("\n");
x=x+1;

}

}
int main(){
FILE * txt;	
int valor;
txt=fopen("numeros.txt","r");
	if (txt==NULL){
	printf("%d nose pudo abrir archivo");
	
	}else {
	
	while (feof(txt) == 0){
		 	
         fscanf( txt, " %i", &valor);
         
piramide(valor);
		}
}
fclose(txt);
  return 0;
}
