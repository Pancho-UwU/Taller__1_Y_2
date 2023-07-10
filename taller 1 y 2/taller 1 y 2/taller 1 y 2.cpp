
#include <iostream>
#include "MatrizPocoPoblada.h"
#include "Nodo.h"
#include "NodoABB.h"
#include "ABB.h"
using namespace std;

int main()
{
    MatrizPocoPoblada matriz;
    /*
    // Añadir nodos a la matriz
    matriz.añadirNodo(1, 1, 10);
    matriz.añadirNodo(2, 3, 20);
    matriz.añadirNodo(3, 2, 30);
    matriz.añadirNodo(4, 4, 40);

    // Recorrer la matriz
    matriz.recorrerMatriz();

    // Obtener el valor de un nodo en una posición específica
    int valor = matriz.obtenerNodo(2, 3);
    std::cout << "Valor en la posicion (2, 3): " << valor << std::endl;

    // Eliminar un nodo de la matriz
    matriz.eliminarNodo(2, 3);

    // Recorrer la matriz nuevamente para verificar los cambios
    matriz.recorrerMatriz();
    */
    int a =1;
    int b =2;
    int c =3;
    int d =4;
    int e =5;
    ABB* p = new ABB(a);
    p->recorrer();
    p->agregar(b);
    p->eliminarNodo(b);
    p->obtenerNodo(a);
    
    return 0;
}


