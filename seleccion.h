#ifndef SELECCION_H_INCLUDED
#define SELECCION_H_INCLUDED

struct SeleccionE;
typedef struct SeleccionE * Seleccion;

///Constructores
Seleccion crearSeleccionVacia();
void crearSeleccion(Seleccion s);

///Mostrar selecciones
void mostrarSeleccion(Seleccion s);

///Agregar jugador
void agregarJugador(Seleccion s);
int buscarPosVacia(Seleccion s);

///Eliminar jugador por nonbre
void eliminarJugador(Seleccion s,char n[30]);

///Ordenar por numero de camiseta
void ordenarPorNro(Seleccion s);

///Buscar jugador por nombre
void buscarJugadorPorNombre(Seleccion s,char nom[30]);





#endif // SELECCION_H_INCLUDED

