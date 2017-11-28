#include<stdio.h>
int r,c,n,m;
float e;
int main()
{
	printf("\tMatriz por escalar\n");
	printf("Ingrese escalar:");
	scanf("%f",&e);
	printf("Ingrese número de renglones:");
	scanf("%d",&n);
	printf("Ingrese número de columnas:");
	scanf("%d",&m);
	float matrix[n][m];
	for(r=0;r<n;r++)
	{
		for(c=0;c<m;c++)
		{
			printf("Ingrese valor(%d,%d):",r+1,c+1);
			scanf("%f",&matrix[r][c]);
			matrix[r][c]=e*matrix[r][c];
		}
	}
	printf("Matriz*%.2f:\n",e);
	for(r=0;r<n;r++)
	{
		for(c=0;c<m;c++)
		{
			printf("%.2f\t",matrix[r][c]);
		}
		printf("\n");
	}
	return 0;
}