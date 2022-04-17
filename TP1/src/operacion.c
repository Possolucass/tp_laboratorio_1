/*
 * operacion.c
 *
 *  Created on: 16 abr. 2022
 *      Author: Lucas
 */
#include "operacion.h"

float get_floatPositivo(char *mensaje){
    float valor;

    if(mensaje!=NULL){
        do{
            printf("%s", mensaje);
            scanf("%f",&valor);
            if(valor<=0){
                printf("ERROR. ");
            }
        }
        while(valor<=0);
    }

    return valor;
}

float get_precioDebito(float precio,float descuento){
    precio = precio*(1-descuento/100);
    return precio;
}



float get_precioCredito(float precio,float interes){
    precio = precio*(1+interes/100);
    return precio;
}


float get_precioBtc(float precio,float btc){
    float precioBtc;
    precioBtc = precio/btc;
    return precioBtc;
}



float get_diferenciaFloat(float valor1,float valor2){ // latam=200   aero=500 ---> diferencia=300
    float resultado;                                // latam=500   aero=200 --->  diferencia=300
    resultado=valor1-valor2;
    return resultado;
}


float get_divisionFloat(float valor1,float valor2){
    float resultado;
    resultado=valor1/valor2;
    return resultado;
}


void informarResultados(int bandera,float precioDebitoLatam,float precioCreditoLatam,float precioBtcLatam,float precioUnitarioLatam,float precioDebitoAerolineas,float precioCreditoAerolineas,float precioBtcAerolineas,float precioUnitarioAerolineas,float diferenciaPrecios){

	//int bandera=0; //bandera==0 si nunca calcule costos en mi sistema (sirve para el informarResultados())
	if(bandera==0){ //nunca se calcularon los costos
        printf("\nNo tiene costos calculados.");
    }
    else{//por lo menos UNA VEZ se calcularon los costos
        printf("\nLatam:");
        printf("\nPrecio con tarjeta de debito: $ %.2f",precioDebitoLatam);
        printf("\nPrecio con tarjeta de credito: $ %.2f",precioCreditoLatam);
        printf("\nPrecio pagado con Bitcoin: %f BTC",precioBtcLatam);
        printf("\nPrecio unitario: $ %.2f",precioUnitarioLatam);
        printf("\n\nAerolineas:");
        printf("\nPrecio con tarjeta de debito: $ %.2f",precioDebitoAerolineas);
        printf("\nPrecio con tarjeta de credito: $ %.2f",precioCreditoAerolineas);
        printf("\nPrecio pagado con Bitcoin: %f BTC",precioBtcAerolineas);
        printf("\nPrecio unitario: $ %.2f",precioUnitarioAerolineas);
        printf("\nLa diferencia de precio es: $ %.2f\n",diferenciaPrecios);
    }
}

void calcula(int *bandera,float btc,float kilometros,float descuento,float interes,float precioLatam, float precioAerolineas,float *precioDebitoLatam,float *precioCreditoLatam,float *precioBtcLatam,float *precioUnitarioLatam,float *precioDebitoAerolineas,float *precioCreditoAerolineas,float *precioBtcAerolineas,float *precioUnitarioAerolineas,float *diferenciaPrecios){

    if(kilometros==0){
        printf("Por favor ingrese un vuelo.");
    }
    else{
    	*bandera=1;
        *precioDebitoLatam = get_precioDebito(precioLatam,descuento);
        *precioCreditoLatam = get_precioCredito(precioLatam,interes);
        *precioBtcLatam = get_precioBtc(precioLatam,btc);
        *precioUnitarioLatam = get_divisionFloat(precioLatam,kilometros);

        *precioDebitoAerolineas = get_precioDebito(precioAerolineas,descuento);
        *precioCreditoAerolineas = get_precioCredito(precioAerolineas,interes);
        *precioBtcAerolineas = get_precioBtc(precioAerolineas,btc);
        *precioUnitarioAerolineas = get_divisionFloat(precioAerolineas,kilometros);

        *diferenciaPrecios = get_diferenciaFloat(precioLatam,precioAerolineas);
    }

//declarar la bandera en el main , y cuando la llamo le paso la con un&bandera
}

