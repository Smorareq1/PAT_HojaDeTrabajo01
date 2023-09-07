#include "Ejercicio04.h"

using namespace std;


void generarCombinacionesParentesis(vector<string>& resultado, string actual, int abrir, int cerrar, int n) {

    if (actual.size() == 2 * n) { //caso base con parejas completadas
        resultado.push_back(actual); //retornar resultado a la lista
        return;
    }

    if (abrir < n) {
        generarCombinacionesParentesis(resultado, actual + "(", abrir + 1, cerrar, n);
    }
    if (cerrar < abrir) {
        generarCombinacionesParentesis(resultado, actual + ")", abrir, cerrar + 1, n);
    }
}

vector<string> Ejercicio04::generateParenthesis(int n)
{
    vector<string> resultado;

    generarCombinacionesParentesis(resultado, "", 0, 0, n);
    return resultado;
}

