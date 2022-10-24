#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "jugador.h"
#include "seleccion.h"
#include "mundial.h"
#define SELECCIONES 32

struct MundialE{
    char sede[20];
    int anio;
    Seleccion selecciones[SELECCIONES];

};

 Mundial crearMundial(){
    Mundial m = malloc(sizeof(struct MundialE));

    printf("ingrese la sede del proximo mundial\n");
    fflush(stdin);
    gets(m->sede);
    printf("ingrese el anio en el que se disputara la copa del mundo\n");
    scanf("%d",&m->anio);

    for(int i=0;i<SELECCIONES;i++){
        m->selecciones[i]=crearSeleccionVacia();
    }
    return m;
 }

void agregarSeleccionesEnMundial(Mundial m){
    int t;
    printf("Ingrese la cantidad de selecciones que quieras agragar\n");
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        crearSeleccion(m->selecciones[i]);
    }
}


void mostrarMundial(Mundial m){

    printf("\n\n-----BIENVENIDOS AL MUNDIAL %s %d-----\n",m->sede,m->anio);
    printf("-----SELECCIONES CLASIFICADAS A LA COPA DEL MUNDO-----\n");
        for(int i=0;i<SELECCIONES;i++){
            mostrarSeleccion(m->selecciones[i]);
        }
};

void eliminarJugadorDelMundial(Mundial m,char nom[30]){

    for(int i=0;i<SELECCIONES;i++){
        eliminarJugador(m->selecciones[i],nom);
    }

}

void ordenarSeleccionesPorNro(Mundial m){
    for(int i=0;i<SELECCIONES;i++){
        ordenarPorNro(m->selecciones[i]);
    }
}

void buscarJugador(Mundial m,char nombreJug[30]){

    for(int i=0;i<SELECCIONES;i++){
        buscarJugadorPorNombre(m->selecciones[i],nombreJug);

    }
};

void modificarCamiseta(Mundial m, char nombre[30]){
    for (int i=0;i<SELECCIONES;i++){
        modificarJugador(m->selecciones[i],nombre);
    }

};

