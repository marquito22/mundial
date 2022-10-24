#ifndef JUGADOR_H_INCLUDED
#define JUGADOR_H_INCLUDED

struct JugadorE;
typedef struct JugadorE * Jugador;
///Constructor
Jugador crearJugadorVacio();
Jugador crearJugador();

///Mostrar
void mostrarJugador(Jugador j);

///Getters
int getNum(Jugador j);
char * getNombre(Jugador j);
///Setters
void setNombre(Jugador j,char n[30]);
void setNum(Jugador j,int nro);

#endif // JUGADOR_H_INCLUDED
