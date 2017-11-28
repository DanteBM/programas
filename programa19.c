#include<stdio.h>
#include<stdlib.h>
int menu,menu2,r;
int main()
{
	do
	{
		system ("clear");
		printf("\t\tDivisiones\n");
		printf("1) Norte\n");
		printf("2) Sur\n");
		printf("3) Centro\n");
		printf("4) Poniente\n");
		printf("Eliga una zona: ");
		setbuf(stdin,NULL);
		scanf("%d",&menu);
		printf("\n");
		switch(menu)
		{
			case 1:
				printf("Has seleccionado Norte\n");
				printf("1) Fernando\n");
				printf("2) Maria\n");
				printf("3) Pedro\n");
				printf("Seleccione a un vendedor: ");
				setbuf(stdin,NULL);
				scanf("%d",&menu2);
				switch(menu2)
				{
					case 1:
						printf("Fernando: $545\n");
						break;
					case 2:
						printf("Maria: $567\n");
						break;
					case 3:
						printf("Pedro: $548\n");
						break;
					default:
						printf("Opción inválida\n");
						break;
				}
				break;
			case 2:
				printf("Has seleccionado Sur\n");
				printf("1) Miranda\n");
				printf("2) Mario\n");
				printf("3) Antonia\n");
				printf("Seleccione a un vendedor: ");
				setbuf(stdin,NULL);
				scanf("%d",&menu2);
				switch(menu2)
				{
					case 1:
						printf("Miranda: $855\n");
						break;
					case 2:
						printf("Mario: $369\n");
						break;
					case 3:
						printf("Antonia: $617\n");
						break;
					default:
						printf("Opción inválida\n");
						break;
				}
				break;
			case 3:
				printf("Has seleccionado Centro\n");
				printf("1) Mauricio\n");
				printf("2) Marta\n");
				printf("3) Santiago\n");
				printf("Seleccione a un vendedor: ");
				setbuf(stdin,NULL);
				scanf("%d",&menu2);
				switch(menu2)
				{
					case 1:
						printf("Mauricio: $498\n");
						break;
					case 2:
						printf("Marta: $472\n");
						break;
					case 3:
						printf("Santiago: $662\n");
						break;
					default:
						printf("Opción inválida\n");
						break;
				}
				break;
			case 4:
				printf("Has seleccionado Poniente\n");
				printf("1) Brenda\n");
				printf("2) Erick\n");
				printf("3) Paola\n");
				printf("Seleccione a un vendedor: ");
				setbuf(stdin,NULL);
				scanf("%d",&menu2);
				switch(menu2)
				{
					case 1:
						printf("Brenda: $617\n");
						break;
					case 2:
						printf("Erick: $365\n");
						break;
					case 3:
						printf("Paola: $437\n");
						break;
					default:
						printf("Opción inválida\n");
						break;
				}
				break;
			default:
				printf("Opción inválida\n");
		}
		printf("\n¿Desea salir? (Presionar 1 para proceder): ");
		setbuf(stdin,NULL);
		scanf("%d",&r);
	}
	while(r!=1);
	return 0;
}