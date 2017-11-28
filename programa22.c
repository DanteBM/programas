#include<stdio.h>
int r,c,m,n;
int main()
{
	printf("\tSuma de dos matrices\n");
	printf("Ingresa número de renglones: ");
	scanf("%d",&m);
	printf("Ingresa número de columnas: ");
	scanf("%d",&n);
	printf("\n");
	int matrizA[m][n];
	for(r=0;r<m;r++)
	{
		for(c=0;c<n;c++)
		{
			printf("Ingrese elemento A(%d,%d)",r+1,c+1);
			scanf("%d",&matrizA[r][c]);
		}
	}
	printf("\nMatrizA:\n");
	for(r=0;r<m;r++)
	{
		for(c=0;c<n;c++)
		{
			printf("%d\t",matrizA[r][c]);
		}
		printf("\n");
	}
	printf("\n");
	int matrizB[m][n];
	for(r=0;r<m;r++)
	{
		for(c=0;c<n;c++)
		{
			printf("Ingrese elemento B(%d,%d)",r+1,c+1);
			scanf("%d",&matrizB[r][c]);
		}
	}
	printf("\nMatrizB:\n");
	for(r=0;r<m;r++)
	{
		for(c=0;c<n;c++)
		{
			printf("%d\t",matrizB[r][c]);
		}
		printf("\n");
	}
	int matrizC[m][n];
	for(r=0;r<m;r++)
	{
		for(c=0;c<n;c++)
		{
			matrizC[r][c]=matrizA[r][c]+matrizB[r][c];
		}
	}
	printf("\nMatrizA+MatrizB:\n");
	for(r=0;r<m;r++)
	{
		for(c=0;c<n;c++)
		{
			printf("%d\t",matrizC[r][c]);
		}
		printf("\n");
	}
	return 0;
}