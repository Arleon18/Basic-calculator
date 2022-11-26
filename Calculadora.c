ECHO est  activado.
#include <stdio.h>
	//Hola
	int sum (int num1, int num2)
	{
		return num1 + num2;
	}

	int rest (int num1, int num2)
	{
		return num1 - num2;
	}

	int mult (int num1, int num2)
	{
		return num1 * num2;
	}

		float dividir (int num1, int num2)
	{
		return num1 / num2;
	}

	int main()
	{
		int dc;
		do	
		{
			int num1, num2, opc;
			printf("Que opcion quieres?\n");
			printf("1. Sumar\n2. Restar\n3. Multiplicar\n4. Dividir\n >> ");
			scanf ("%d", &opc);
			printf("Dame el primer numero: \n");
			scanf ("%d", &num1);
			printf("Dame el segundo numero: \n");
			scanf ("%d", &num2);
	
			switch (opc)
			{
				case 1: 
					printf("La suma de %d + %d es: %d\n", num1, num2, sum(num1, num2));
					break;
	
				case 2: 
					printf("La resta de %d - %d es: %d\n", num1, num2, rest(num1, num2));
					break;
	
				case 3: 
					printf("La multiplicacion de %d * %d es: %d\n", num1, num2, mult(num1, num2));
					break;
	
				case 4: 
					printf("La division de %d / %d es: %.2f\n", num1, num2, dividir(num1, num2));
					break;
			}
			printf("Quieres salir del programa?\n");
			printf("1. Continuar\n2. SALIR\n >> ");
			scanf ("%d", &dc);
		} while (dc == 1);
		return 0;
	}