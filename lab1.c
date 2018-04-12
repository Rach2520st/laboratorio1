/* 
 * Algoritmo narrado:
 * ingresar el n° del candidato que desea elegir, este puede ser 1,2 0 3 segun el candidato que desee escoger
 * cada voto ingresado se va sumando hasta presionar f
 * se suman los votos, se informa quien es el ganador y los votos obtenidos por cada candidato 
 * */
 
#include <stdio.h>
int main()
{
   
	int  candidato1=0, candidato2=0, candidato3=0, voto, nulo=0;
	char paro='b';
	
	while (paro!='f'){
		printf("el candidato 1 corresponde a Gabriel Zuñiga\n");
	printf("el candidato 2 corresponde a Manuel Garcia\n");
	printf("el candidato 3 corresponde a Francisca Baez\n");	
	printf("ingrese el n° del candidato que desea elegir:\n");
	scanf("%d", &voto);
	switch(voto){
		case 1:
			printf("usted voto candidato 1\n");
			candidato1++;
			break;
		case 2: 
			printf("usted voto candidato 2\n");
			candidato2++;
			break;
		case 3:
			printf("usted voto candidato 3\n");
			candidato3++;
			break;
		default: 
			nulo++;
	}
	voto=0;
	
	scanf("%c",&paro);
}
	printf("el candidato 1 tuvo:%d votos\n", candidato1);
	printf("el candidato 2 tuvo: %d votos\n", candidato2);
	printf("el candidaro 3 tuvo: %d votos\n", candidato3);
	
	if ((candidato1>candidato2) && (candidato1>candidato3)){
		printf("Gabriel Zuñiga ha sido electo presidente\n");
	}
	else if ((candidato2>candidato1) && (candidato2>candidato3)){
		printf("Manuel Garcia ha sido electo presidente\n");
	}
	else if ((candidato3>candidato1) && (candidato3>candidato2)){
		printf("Francisca Baez ha sido electa presidenta\n");
	} 
	

	return 0;
	
	
}

		

