/*
 ============================================================================
 Name        : Tp1.c
 Author      : Yohanna Bordón
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"




    int sumaOperandos(float suma1, float suma2);
	int restaOperandos(float resta1, float resta2);
	int multOperandos(float mult1,float mult2);
	int dividir(float* pResultadoDivision, int dividendo, int divisor);
	int facOperandos (float num);
	int pedirNumeros (float *pResultado , char *mensaje);



int main(){


	setbuf(stdout,NULL);


    float oA=0;
    float oB=0;
    float suma;
    float resta;
    float multiplicacion;
    float resultadoDivision;
    int division;
    int opcionA;
    int opcionB;
    float facA;
    float facB;
    int flag1=0;
    int flag2=0;
    int flag3=0;
    int opcionMenu;



do {



    printf("\n***  CALCULADORA  ***\n");


        printf("1- Ingresar 1er operando: (A=%.2f)\n", oA);
        printf("2- Ingresar segundo operando: (B=%.2f)\n", oB);

        printf("3) Calcular todas las operaciones\n");
        printf("    a) Calcular la suma (A+B)\n");
		printf("    b) Calcular la resta (oA-oB)\n");
		printf("    c) Calcular la division (oA/oB)\n");
		printf("    d) Calcular la multiplicacion (oA*oB)\n");
		printf("    e) Calcular el factorial (oA!)\n");
		printf("    f) Calcular el factorial (oB!)\n\n");
    printf("4) Mostrar los resultados \n");
    printf("5) Para salir \n\n");

    printf("Ingrese una opcion : ");
    scanf("%d", &opcionMenu);

    switch (opcionMenu)
    {

    case 1:
    	opcionA = pedirNumeros (&oA, "Ingrese el operando A:\n");
		if (opcionA == 1 ){
			printf ("Ingresaste el primer operando correctamente\n");
			flag1= 0;
		}
		else {
			printf ("Error. Vuelve a ingresar el primer operando\n");
		}
        break;

    case 2:
         if (flag1== 0) {
    	opcionB = pedirNumeros (&oB, "Ingrese el operando B:\n");
    	 if (opcionB == 0){
    		 printf ("Se ingreso bien el operando B");
    		flag3= 0;

    	 }
    	 else {
    		 printf ("Error. Vuelve a ingresar el segundo operando\n");
    	 }
         }else {
        	 printf ("No se puede mostrar el segundo operando, sin mostrar el primero");

         }


        break;


    case 3:

        if(flag2==0)
        {
        	suma = sumaOperandos(oA,oB);
            resta =restaOperandos(oA, oB);
            division = dividir(&resultadoDivision,oA,oB);
            multiplicacion= multOperandos (oA, oB);


            if (oA >=0){
		    facA = facOperandos (oA);
			}
			else {
				facA = -1;
			}
			if (oB >=0){
			facB= facOperandos (oB);
			}
			else {
				facB = -1;
			}
        }
	    system("pause");
         break;

        case 4:

    	if (flag3== 0){
    		printf("El resultado de la resta de  (A-B) es: %.2f\n",resta);
    		printf("El resultado de la suma de (A+B) es: %.2f\n",suma);

    		if(!division)
    		{
    		printf("El resultado de la division de (A/B) es: %.2f\n", resultadoDivision);

    		}else
    		{
            printf("No se admite división por 0\n");
    		}

    		printf ("El resultado de la multiplicacion de (A*B) es %2.f\n", multiplicacion);

    		if(facA>=1)
            {
    		printf("El factorial de A es: %.2f\n",facA);

            }else {
            	printf ("No se pudo realizar el factorial");
            }if(facB>=1 )
			{
				printf("El factorial de B es: %.2f\n",facB);
			}else
			{
				printf("No se pudo realizar el factorial de B");
			}

            system ("pause");
            break;


    	}
    	}
        }while (opcionMenu != 5);

  }























