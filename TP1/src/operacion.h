/*
 * operacion.h
 *
 *  Created on: 16 abr. 2022
 *      Author: Lucas
 */

#ifndef OPERACION_H_
#define OPERACION_H_
#include <stdio.h>
#include <stdlib.h>

/// @fn float get_floatPositivo(char*)
/// @brief
///
/// @pre
/// @post
/// @param mensaje
/// @return
float get_floatPositivo(char *mensaje);
/// @fn float get_precioDebito(float, float)
/// @brief
///
/// @pre
/// @post
/// @param precio que ingresa el usuario
/// @param descuento por abonar con debito
/// @return
float get_precioDebito(float precio,float descuento);
/// @fn float get_precioCredito(float, float) funcion para el pago con tarjeta de credito
/// @brief
///
/// @pre
/// @post
/// @param precio que ingresa el usuario.
/// @param interes que se le agrega en caso que sea tarjeta de credito
/// @return
float get_precioCredito(float precio,float interes);
 /// @fn float get_precioBtc(float, float)
 /// @brief
 ///
 /// @pre
 /// @post
 /// @param precio ingresado por el usuario
 /// @param btc, bitcoin valor al momento en que lo realice.
 /// @return
float get_precioBtc(float precio,float btc);
float get_diferenciaFloat(float precio1,float precio2);
/// @fn float get_divisionFloat(float, float)
/// @brief
///
/// @pre
/// @post
/// @param valor1
/// @param valor2
/// @return
float get_divisionFloat(float valor1,float valor2);
void informarResultados(int bandera,float precioDebitoLatam,float precioCreditoLatam,float precioBtcLatam,float precioUnitarioLatam,float precioDebitoAerolineas,float precioCreditoAereolineas,float precioBtcAereolineas,float precioUnitarioAereolineas,float diferenciaPrecios);
void calcula(int *bandera,float btc,float kilometros,float descuento,float interes,float precioLatam, float precioAerolineas,float *precioDebitoLatam,float *precioCreditoLatam,float *precioBtcLatam,float *precioUnitarioLatam,float *precioDebitoAerolineas,float *precioCreditoAereolineas,float *precioBtcAereolineas,float *precioUnitarioAereolineas,float *diferenciaPrecios);




#endif /* OPERACION_H_ */
