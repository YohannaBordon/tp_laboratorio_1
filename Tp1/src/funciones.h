/*
 * funciones.h
 *
 *  Created on: 17 abr. 2021
 *      Author: Yohanna Bordón
 */

#ifndef FUNCIONES_H_
#define FUNCIONES_H_


/***
 * @brief La funcion multOperandos toma dos valores y realiza la multiplicacion, se devuelve el resultado por return
 * @param mult1 operando A ingresado de tipo float ingresado
 * @param multiplicador Operador B de tipo float ingresado
 * @return Se devuelve por return el resultado de la multiplicacion A*B
 */

int multOperandos(float mult1,float mult2);

/**
 * @brief Toma dos valores y realiza la division, se realiza la validacion que se el divisor no sea 0 y el puntero no sea NULL
 * /si el numero es valido se realiza la division y se pasa a traves del puntero. Se retorna un valor si se realizo correctamente
 *
 * @param pResultado Puntero de referencia, la direccion de memoria donde se guardara el valor del resultado de la division
 * @param dividendo Operando A de tipo entero ingresado por el usuario
 * @param divisor Operador B de tipo entero se valida que no sea menor de 0.
 * @return retorna el valor 0 si salio bien y -1 si salio mal
*/

int dividir(float* pResultadoDivision, int dividendo, int divisor);



/**
 * @brief La funcion sumaOperandos toma los dos valores ingresados de tipo float, realiza la suma y se devuelve a traves del return
 * @param suma1 Operador A de tipo float ingresado
 * @param suma2 Operador B de tipo float ingresado
 * @return Se devuelve por return el resultado de la suma A+B
 */

int sumaOperandos(float suma1, float suma2);
/**
 * @brief La funcion restaOperandos toma los dos valores ingresados de tipo float, realiza la resta y se devuelve a traves del return
 * @param resta1 Operando A ingresado de tipo float ingresado
 * @param resta2 Operando B ingresado de tipo float ingresado
 * @return Retorna el resultado de la resta A-B
 */


int restaOperandos(float resta1, float resta2);
/**
 * @brief La funcion funcionFactorial Toma el valor recibido para realizar el calculo factorial
 * @param El operando ingresado para realizar el calculo
 * @return Devuelve el resultado de la factorizacion
 */
int funcionFactorial(float numero);
/**
 * @brief La funcion pedirNumeros lo conforma *pResultado el puntero donde se guarda el resultado
 * *char mensaje error es el puntero del mensaje de error en caso de ingresar un numero invalido, *mesaje es el puntero del mensaje
 * que solicita el ingreso del numero,  minimo es el parametro del numero "minimo" que se puede ingresar
 * "maximo" es el parametro del mayor numero posible a ingresar, "reintentos" es la cantidad de reintentos que se permiten
 *
 * @param pResultado  Puntero donde se guarda el numero valido que ingresa el usuario

 * @param mensaje	Puntero del mensaje que informa al usuario que debe ingresar un numero
 * @return  Si el calculo se realizo correctamente retorna O y en caso de error -1, y se tiene que ingresar otro valor.
 *
 */
int pedirNumeros (float*pResultado , char*mensaje);









#endif /* FUNCIONES_H_ */
