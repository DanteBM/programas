#include<stdio.h>
int i;
float mes[13],suma=0,promedio;
int main()
{
	for(i=1;i<13;i++)
	{
		printf("Ingrese gastos del mes %d:",i);
		scanf("%f",&mes[i]);
		suma+=mes[i];
	}
	promedio=(suma/12);
	printf("Los gastos del mes 6 es: %.2f\n", mes[6]);
	printf("Los gastos del mes 12 es: %.2f\n", mes[12]);
	printf("El gasto anual es: %.2f\n",suma);
	printf("El promedio del gasto anual es: %.2f\n",promedio);
	return 0;
}