#include<stdio.h>


int ObtenerDivisores(x)
{
	int i, r;
	for(i=1; i<=x; i++)
	{
		r=x%i;
		if(r==0)
		{
			printf("%d\t",i);
		}
	}
}


int main ()
{
	system("color f4");
	printf("\n\t\t\tPrograma 07 Divisores");
	printf("\n\t\t\t_____________________");
	printf("\n\tEste programa calculara los divisores de un numero entero positivo.\n\n\n");

	system("pause");
	system("cls");
	int o, n;
	do{
		printf("Dame un numero: ");
		scanf("%d",&n);
		while(n<=0)
		{
			printf("Debe ser mayor que 0.\n");
			printf("Dame le numero: ");
		    scanf("%d",&n);
		}
		printf("Los divisores son: \n");
		ObtenerDivisores(n);
		printf("\nDesea calcular divisores para otro numero?\n");
		printf("\tSi=1\tNo=0\t");
		scanf("%d",&o);
		while(o!=1 && o!=0)
		{
			printf("Opcion no valida intente de nuevo.\n");
			printf("\tSi=1\tNo=0\t");
		    scanf("%d",&o);
		}
		system("cls");
	}while(o==1);
	return 0;
}
