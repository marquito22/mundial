#include <stdio.h>
#include <stdlib.h>
#include "jugador.h"
#include "seleccion.h"
#include <string.h>
#define TAM 23
#define SELECCIONES 32

struct SeleccionE{
    char pais[20];
    int rank;
    Jugador plantel[TAM];
};
///constructor
Seleccion crearSeleccionVacia(){
    Seleccion s = malloc(sizeof(struct SeleccionE));
    strcpy(s->pais,"vacio");
    s->rank=-1;
    for (int i=0;i<TAM;i++){
        s->plantel[i]=crearJugadorVacio();
    }
    return s;
}

void crearSeleccion(Seleccion s){

    printf("ingrese el pais de la selecion\n");
    fflush(stdin);
    gets(s->pais);
    printf("Ingrese el ranking FIFA de la seleccion\n");
    scanf("%d",&s->rank);
    ///Agregamos los jugadores a la seleccion
    int t;
    printf("¿cuantos jugadores quiere agregar a la seleccione?\n");
    scanf("%d",&t);
    for (int i=0;i<t;i++){
        agregarJugador(s);
    }

}

///Mostrar Seleccion con sus respectivos jugadores
void mostrarSeleccion(Seleccion s){
    if(s->rank != -1){
        printf("\n-------------------------------------------------\n");
        printf("Seleccion:%s-----Ranking FIFA:%d\n",s->pais,s->rank);
        for(int i=0;i<TAM;i++){
            mostrarJugador(s->plantel[i]);
        }
    }
}

///Agregamos jugador
int buscarPosVacia(Seleccion s){
    int pos=-1;
    for(int i=0;i<TAM;i++){
        if(getNum(s->plantel[i])== -1){
            pos=i;
            i=TAM+1;
        }
    }
    return pos;
};

void agregarJugador(Seleccion s){

    int posVacia=buscarPosVacia(s);
    if(posVacia != -1){
      s->plantel[posVacia]=crearJugador();
   }
}

///Eliminamos un jugador por nombre
void eliminarJugador(Seleccion s,char n[30]){

    for(int i=0;i<TAM;i++){
        if(strcmp(getNombre(s->plantel[i]),n)== 0){
            setNombre(s->plantel[i],"Vacio");
            setNum(s->plantel[i],-1);
        }
    }
}

///Ordenamos a los jugadores dentro de la seleccion por numero de menor a mayor
void ordenarPorNro(Seleccion s){

    Jugador jugAux;

    for (int i=0;i<TAM;i++){
        for(int j=0;j<TAM-1;j++){
            if(getNum(s->plantel[j]) > getNum(s->plantel[j+1])){
                jugAux=s->plantel[j];
                s->plantel[j]=s->plantel[j+1];
                s->plantel[j+1]=jugAux;
            }
        }
    }

};

///Buscamos jugador por su nombre
void buscarJugadorPorNombre(Seleccion s,char nom[30]){

    for(int i=0;i<TAM;i++){
        if(strcmp(getNombre(s->plantel[i]),nom)==0){

            printf("\n----JUGADOR ENCONTRADO----\n");
            printf("Nombre: %s ---- Dorsal:%d ---- Jugador de: %s\n", getNombre(s->plantel[i]),getNum(s->plantel[i]),s->pais);
            i=TAM+1;
        }
    }

};

///modificamos numero de un jugador
void modificarJugador(Seleccion s,char nom[30]){
    int n;
    for(int i=0;i<TAM;i++){
        if(strcmp(getNombre(s->plantel[i]),nom)==0){
            printf("\n ingrese el nuevo numero para el jugador %s\n",nom);
            scanf("%d",&n);
            setNum(s->plantel[i],n);
        }
    }


};







