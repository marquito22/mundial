#include <stdio.h>
#include <stdlib.h>
#include "jugador.h"
#include <string.h>
#define TAM 23
struct JugadorE{
    char nombre[30];
    int camiseta;
};
///Constructores
Jugador crearJugadorVacio(){
    Jugador j = malloc(sizeof(struct JugadorE));

    strcpy(j->nombre,"Vacio");
    j->camiseta=-1;

    return j;
};

Jugador crearJugador(){
    Jugador j = malloc(sizeof(struct JugadorE));
    printf("ingrese el nombre del jugador\n");
    fflush(stdin);
    gets(j->nombre);
    printf("ingrese el numero de camiseta del jugador\n");
    scanf("%d",&j->camiseta);

    return j;
}

///Mostrar jugador
void mostrarJugador(Jugador j){
    if(j->camiseta != -1){
        printf("Jugador:%s------Numero de camiseta:%d\n",j->nombre,j->camiseta);
    }
}

///getters
int getNum(Jugador j){
    return j->camiseta;
};
char * getNombre(Jugador j){
    return j->nombre;
}

///Setters
void setNombre(Jugador j,char n[30]){
    strcpy(j->nombre,n);
};
void setNum(Jugador j,int nro){
    j->camiseta=nro;
};

