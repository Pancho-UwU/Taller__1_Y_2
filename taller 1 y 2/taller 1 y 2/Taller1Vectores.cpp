#include <iostream>
#include "matrizpocopoblada.h"

int main() {
    MatrizPocoPoblada matriz;

    // A�adir nodos a la matriz
    matriz.a�adirNodo(1, 1, 10);
    matriz.a�adirNodo(2, 3, 20);
    matriz.a�adirNodo(3, 2, 30);
    matriz.a�adirNodo(4, 4, 40);

    // Recorrer la matriz
    matriz.recorrerMatriz();

    // Obtener el valor de un nodo en una posici�n espec�fica
    int valor = matriz.obtenerNodo(2, 3);
    std::cout << "Valor en la posicion (2, 3): " << valor << std::endl;

    // Eliminar un nodo de la matriz
    matriz.eliminarNodo(2, 3);

    // Recorrer la matriz nuevamente para verificar los cambios
    matriz.recorrerMatriz();

    return 0;
}