/*
 * funciones.c
 *
 *
 *  Created on: 17 abr. 2021
 *      Author: Yohanna Bordón
 */

 #include <stdio.h>
 #include <stdlib.h>

int pedirNumeros (float*pResultado , char*mensaje)
	{
	float numero;
	int retorno= -1;
	if (pResultado != NULL &&  mensaje != NULL ){
		printf ("Ingrese el numero : ");
	    scanf ("%f", &numero);
	    retorno =0;
	}

	return retorno;


}
int sumaOperandos(float suma1, float suma2)
{
	float resSuma;
	resSuma = suma1 + suma2;
	return resSuma;
}

int restaOperandos(float resta1, float resta2)
{
	float resResta;
	resResta = resta1 - resta2;
	return resResta;
}

int multOperandos(float mult1,float mult2)
{
   float restMult;
   restMult = mult1 * mult2;
   return restMult;
}

int dividir(float* pResultadoDivision, int dividendo, int divisor)
{
	int retorno = -1;
	if(pResultadoDivision != NULL && divisor != 0)
	{
		*pResultadoDivision = (float)dividendo / divisor ;
		retorno = 0;
	}
	return retorno;
}



int facOperandos (float num)
{
	float retornoFac = 1;

		for(float factorial = 1 ; factorial<=num;factorial++)
		{
			retornoFac = retornoFac * factorial;
		}

		return retornoFac;
	}



