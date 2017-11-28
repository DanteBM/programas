#include<stdio.h>
#include<stdlib.h>
int m,r;
float a,b,c;

int main(){
	do
	{
		system ("cls");
		printf("\tCalculadora básica\n");
		printf("Presione 1 para realizar suma\n");
		printf("Presione 2 para realizar resta\n");
		printf("Presione 3 para realizar multiplicación\n");
		printf("Presione 4 para realizar división\n");
		printf("Presione otra tecla para terminar\n");
		printf("Opción:");
		setbuf(stdin,NULL);
		scanf("%d",&m);

		switch(m)
		{
			case 1:
				printf("Ingrese sumando 1: ");
				scanf("%f",&a);
				printf("Ingrese sumando 2: ");
				scanf("%f",&b);
				c=(a+b);
				printf("%.2f + %.2f = %.3f\n",a,b,c);
				break;
			case 2:
				printf("Ingrese minuendo: ");
				scanf("%f",&a);
				printf("Ingrese sustraendo: ");
				scanf("%f",&b);
				c=(a-b);
				printf("%.2f - %.2f = %.3f\n",a,b,c);
				break;
			case 3:
				printf("Ingrese multiplicando: ");
				scanf("%f",&a);
				printf("Ingrese multiplicador: ");
				scanf("%f",&b);
				c=(a*b);
				printf("%.2f * %.2f = %.3f\n",a,b,c);
				break;
			case 4:
				printf("Ingrese dividendo: ");
				scanf("%f",&a);
				printf("Ingrese divisor: ");
				scanf("%f",&b);
				c=(a/b);
				printf("%.2f / %.2f = %.3f\n",a,b,c);
				break;
			default:
				exit(0);			
		}
		printf("¿Desea salir? (Presione 1 para proceder): ");
		setbuf(stdin,NULL);
		scanf("%d",&r);			
	}
	while(r!=1);
	return 0;
}