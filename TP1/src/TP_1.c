/*
 ============================================================================
 Name        : TP_1.c
 Author      : Lucas Posso
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */


#include <stdio.h>
#include <stdlib.h>
#include "menu.h"
#include "operacion.h"


int main(void)
{
	setbuf(stdout,NULL);
    float precioLatam,precioAerolineas,kilometros;
    float precioDebitoLatam,precioDebitoAerolineas,precioCreditoLatam,precioCreditoAerolineas;
    float precioBtcLatam,precioBtcAerolineas,precioUnitarioLatam,precioUnitarioAerolineas,diferenciaPrecios;
    float interes,descuento,btc;
    int opcion;
    int bandera;

    kilometros=precioAerolineas=precioLatam=0;
    interes=25;
    descuento=10;
    btc=4610915.60;
    bandera =0 ;


    do{

        opcion=menuPrincipal(kilometros,precioAerolineas,precioLatam);  //menuPrincipal devuelve el numero de opcion ingresado ya validado


        switch(opcion){
            case 1:

                    kilometros=get_floatPositivo("Ingrese la cantidad de kilometros: ");

            break;
            case 2:
                    precioLatam=get_floatPositivo("Ingrese el precio de Latam: ");

                    precioAerolineas=get_floatPositivo("Ingrese el precio de Aerolineas: ");
            break;
            case 3:
                   calcula(&bandera,btc,kilometros,descuento,interes,precioLatam,precioAerolineas,&precioDebitoLatam,&precioCreditoLatam,&precioBtcLatam,&precioUnitarioLatam,&precioDebitoAerolineas,&precioCreditoAerolineas,&precioBtcAerolineas,&precioUnitarioAerolineas,&diferenciaPrecios);
            break;
            case 4:
                   informarResultados(bandera,precioDebitoLatam,precioCreditoLatam,precioBtcLatam,precioUnitarioLatam,precioDebitoAerolineas,precioCreditoAerolineas,precioBtcAerolineas,precioUnitarioAerolineas,diferenciaPrecios);
            break;
            case 5:
                    precioAerolineas=162965;
                    precioLatam=159339;
                    kilometros=7090;
                    calcula(&bandera,btc,kilometros,descuento,interes,precioLatam,precioAerolineas,&precioDebitoLatam,&precioCreditoLatam,&precioBtcLatam,&precioUnitarioLatam,&precioDebitoAerolineas,&precioCreditoAerolineas,&precioBtcAerolineas,&precioUnitarioAerolineas,&diferenciaPrecios);
                    informarResultados(bandera,precioDebitoLatam,precioCreditoLatam,precioBtcLatam,precioUnitarioLatam,precioDebitoAerolineas,precioCreditoAerolineas,precioBtcAerolineas,precioUnitarioAerolineas,diferenciaPrecios);

            break;
        }
    }while(opcion!=6);



    return 0;
}


//Libreria menuPrincipal




