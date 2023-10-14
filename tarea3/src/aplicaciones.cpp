#include "../include/aplicaciones.h"

#include "../include/conjuntoIds.h"  // Incluye el módulo conjuntoIds

// ...

TPilaJugador menoresQueElResto(TJugadoresLDE lista)
{











    
  return NULL;
}





bool sumaPares(nat k, TConjuntoIds c) { //el k es el objetivo de la suma  

    TConjuntoIds vistos = crearTConjuntoIds(cantMaxTConjuntoIds(c));
    for (nat i = 1; i <= cantMaxTConjuntoIds(c); i++) {
        if (perteneceTConjuntoIds(i, c)) {
            nat restante = k - i;

            if (restante != i && perteneceTConjuntoIds(restante, c)) {
                liberarTConjuntoIds(vistos);
                return true;
            }
            insertarTConjuntoIds(i, vistos);
        }
    }
    liberarTConjuntoIds(vistos);
    return false;
}

