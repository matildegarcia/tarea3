#include "../include/aplicaciones.h"

TPilaJugador menoresQueElResto(TJugadoresLDE lista) {
    TPilaJugador resultado = crearTPilaJugador();
 
    while (cantidadTJugadoresLDE(lista) >= 1) {
        TJugador actual = obtenerInicioDeTJugadoresLDE(lista);

        if (cantidadEnTPilaJugador(resultado) < 1 || edadTJugador(cimaDeTPilaJugador(resultado)) < edadTJugador(actual)) {
            apilarEnTPilaJugador(resultado, actual);
        } else {
            while (cantidadEnTPilaJugador(resultado) >= 1 && edadTJugador(cimaDeTPilaJugador(resultado)) > edadTJugador(actual)) {
                desapilarDeTPilaJugador(resultado);
            }
            apilarEnTPilaJugador(resultado, actual);
        }
        eliminarInicioTJugadoresLDE(lista);
    }
    return resultado;
}

bool sumaPares(nat k, TConjuntoIds c) { 
    for (nat i = 1; i <= cantMaxTConjuntoIds(c); i++) {
        if (perteneceTConjuntoIds(i, c)) {
            nat res = k - i;

            if (res  > i && perteneceTConjuntoIds(restante, c)) {
                return true;
            }
        }
    }
    return false;
}


