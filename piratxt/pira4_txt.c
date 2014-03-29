#include<stdio.h>

void piramide(int x){

	printf(" numero obtenido %d",x);
printf("\n");
 int i;
 int i2;

 int x2=1;
 

 for (i=0;i=x;i++){

for (i2=0;i2<x2;i2++){
 printf(" ");
}

for (i2=0;i2<x;i2++){
 printf("*");
}


printf("\n");
x=x-1;
x2=x2+1;
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
