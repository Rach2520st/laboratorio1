/* Algoritmo narrado
 * 1.- ingresar el valor de la comida
 * 2.- sacar el iva que es el 19% de la compra
 * 3.- sacar el valor de la propina sacando el 10% de la compra
 * 4.-sumar los valores del paso 2 y 3 al valor de la comida, quedando el valor total de la cuenta
 * 5.- para obtener el valor que paga cada integrante se divide el valor total de la cuenta en el  numero de integrantes
 * 6.- Fin
 * */
#include <stdio.h>
int main()
{
	int precio_comida, n_de_integrantes;
	float  iva, propina, precio_total, valor_a_pagar_cada_uno;
	
	printf("ingrese el valor de la cuenta:\n");
	scanf("%d",&precio_comida);
	
	printf("ingrese el n° de integrantes\n:");
	scanf("%d", &n_de_integrantes);
	
	iva=(precio_comida*0.19);
	propina=(precio_comida*0.10);
	precio_total= (precio_comida+iva+propina);
	valor_a_pagar_cada_uno = (precio_total/n_de_integrantes);
	
	printf("el valor total de la cuenta: %.2f",precio_total);
	printf("el valor que debe pagar cada integrante es:%.2f",valor_a_pagar_cada_uno);
	return 0;
}
	
	
	
