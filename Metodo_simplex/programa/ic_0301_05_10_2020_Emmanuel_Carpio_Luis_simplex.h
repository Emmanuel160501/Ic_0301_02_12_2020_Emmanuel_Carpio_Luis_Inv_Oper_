/**
 
 * @version 5.11.4.9.2
 * @date 27/11/2020
 * @author Emmanuel Carpio Luis
 * @brief Optimizacion de solucion de problemas con el metodo simplex 
 */

#ifndef __ic_0301_05_10_2020_emmanuel_carpio_luis_simplex_H
#define __ic_0301_05_10_2020_emmanuel_carpio_luis_simplex_H


#include <stdio.h>
#include <stdlib.h>
/**
 *@brief Se definen la cantidad maxima
 */
#define MAX 10
/**
 *@brief Se definen la cantidad de restricciones
 */
#define RESTRICCION 3

/**
 * @brief Indica las funciones maximas 
 * @param MAX Cantidad de funciones maximas 
 * @return Un valor double 
 */
double funcion[MAX];

/**
 * @brief Indica las restricciones maximas 
 * @param MAX Cantidad de funciones maximas 
 * @param RESTRICCION Hace referencia a las restricciones 
 * @return Un valor double 
 */
double restricciones[MAX+1][MAX+RESTRICCION];

/**
 * @brief Indica las restricciones independientes 
 * @param RESTRICCION Cantidad de restricciones independientes 
 * @return Un valor double 
 */
double independiente[RESTRICCION];


#endif

