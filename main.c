#include <stdio.h>
#include <stdlib.h>
#include "mundial.h"
#include "seleccion.h"
#define SELECCIONES 32

int main()
{

   Mundial m1=crearMundial();

   agregarSeleccionesEnMundial(m1);

   ordenarSeleccionesPorNro(m1);

   eliminarJugadorDelMundial(m1,"neymar");

   modificarCamiseta(m1,"otamendi");

   ordenarSeleccionesPorNro(m1);

   buscarJugador(m1,"messi");

   mostrarMundial(m1);



    return 0;
}
