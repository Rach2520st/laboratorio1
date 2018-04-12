/*algoritmo narrado
 * 1.- ingresar el precio del traje
 * 2.- calcular si el precio del traje es mayor a 2500 se le descuenta el 15% del precio total
 * 3.- calcular si el precio del traje es menor a 2500 se le descuenta el 8% del precio total
 * 4.-mostrar el precio final
 * 5.-fin
 * */
#include <stdio.h>
int main()
{
	float precio;
	printf("ingrese precio de su traje:\n");
	scanf("%f",&precio);
	if (precio>2500){
		precio= (precio*0.85);
	}
	else if(precio<2500){
		precio=(precio*0.92);
	}
	printf("el valor de la compra es: %.2f", precio);
	return 0;
}
			


