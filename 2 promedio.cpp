// Suma y Promedio de Nodos (Listas Enlazadas) Prof: Gregory Rivera
/*saludo*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
struct nodo{
int n;
struct nodo *sig;
}*ini,*fin;
int cont,i=0;
int j=0;
struct nodo *nuevo;
main(){
int n;
float pro;
int opc;
do{
printf("1.- INSERTAR N�MERO\n");
printf("2.- MOSTRAR RESULTADO\n");
printf("3.- MOSTRAR PROMEDIO\n");
printf("4.- SALIR\n\n");
scanf("%d",&opc);
system("cls");
switch(opc){
case 1:
nuevo=(struct nodo *)malloc(sizeof(struct nodo));
printf("INTRODUCIR N�MERO:\n");
scanf("%d",&nuevo->n);
j++;
nuevo->sig=ini;
cont= nuevo->n;
i=i+cont;
if(ini==NULL){
ini=nuevo;
fin=nuevo;
} else{
ini->sig=nuevo;
ini=nuevo;
}
break;
case 2:
system("cls");
printf("%d\n", i);
break;
case 3:
system("clls");
pro=(i/j);
printf("PROMEDIO:\n %.2f\n", pro);
break;
case 4:
printf("SALI� DEL SISTEMA\n");
break;
default:
printf("OPCI�N INVALIDA");
break;
}
}while(opc!=4);
}
