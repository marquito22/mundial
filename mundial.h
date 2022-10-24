#ifndef MUNDIAL_H_INCLUDED
#define MUNDIAL_H_INCLUDED

struct MundialE;
typedef struct MundialE * Mundial;

Mundial crearMundial();

void mostrarMundial(Mundial m);

void agregarSeleccionesEnMundial(Mundial m);

void eliminarJugadorDelMundial(Mundial m,char nom[30]);

void ordenarSeleccionesPorNro(Mundial m);

void buscarJugador(Mundial m,char nombreJug[30]);

void modificarCamiseta(Mundial m, char nombre[30]);



#endif // MUNDIAL_H_INCLUDED
