/*
 * menu.c
 *
 *  Created on: 16 abr. 2022
 *      Author: Lucas
 */
#include "menu.h"

int menuPrincipal(float kilometros,float precioAerolineas,float precioLatam){
   int opcion;

   printf("\n1. Ingresar Kilometros: (km=%.0f)\n",kilometros);
   printf("2. Ingresar Precios de Vuelos: (Aerolineas=%.2f,Latam=%.2f)\n",precioAerolineas,precioLatam);
   printf("3. Calcular todos los costos\n4. Imprimir costos\n5. Carga forzada\n6. Salir");
   do{
      printf("\nIngrese una opcion: ");
      scanf("%d",&opcion);
      if(opcion<1 || opcion>6){
            printf("Deberias de ingresar una opcion entre 1 y 6. ");
      }
   }while(opcion<1 || opcion>6);
   return opcion;
}
