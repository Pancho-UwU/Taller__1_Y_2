#include "matrizpocopoblada.h"
#include <iostream>
using namespace std;

MatrizPocoPoblada::MatrizPocoPoblada() {
}

MatrizPocoPoblada::~MatrizPocoPoblada() {
    // Liberar memoria de los nodos almacenados en la matriz
    for (Nodo* nodo : matriz) {
        delete nodo;
    }
}

void MatrizPocoPoblada::recorrerMatriz() const {
    for (int i = 0; i < vectorFila.size(); i++) {
        int fila = vectorFila[i];
        int columna = vectorColumna[i];
        int valor = matriz[i]->getValor();
        
        cout << "Posicion (" << fila << ", " << columna << "): " << valor << endl;
    }
}

void MatrizPocoPoblada::añadirNodo(int fila, int columna, int valor) {
    // Crear un nuevo Nodo y almacenarlo en la matriz
    Nodo* nuevoNodo = new Nodo(valor);
    matriz.push_back(nuevoNodo);

    
    vectorColumna.push_back(columna);
    vectorFila.push_back(fila);
}

void MatrizPocoPoblada::eliminarNodo(int fila, int columna) {
    // Buscar el nodo correspondiente a la posición (fila, columna)
    for (int i = 0; i < matriz.size(); i++) {
        if (vectorFila[i] == fila && vectorColumna[i] == columna) {
            // Eliminar el nodo de la matriz
            delete matriz[i];
            matriz.erase(matriz.begin() + i);

            // Eliminar las posiciones de los vectores columna y fila
            vectorColumna.erase(vectorColumna.begin() + i);
            vectorFila.erase(vectorFila.begin() + i);

            break; // Terminar el bucle una vez encontrado el nodo
        }
    }
}

int MatrizPocoPoblada::obtenerNodo(int fila, int columna) const {
    // Buscar el nodo correspondiente a la posición (fila, columna)
    for (int i = 0; i < matriz.size(); i++) {
        if (vectorFila[i] == fila && vectorColumna[i] == columna) {
            return matriz[i]->getValor();
        }
    }
    // Si no se encuentra el nodo, retornar un valor predeterminado (por ejemplo, 0)
    return 0;
}

std::vector<int> MatrizPocoPoblada::getVectorColumna() const {
    return vectorColumna;
}

void MatrizPocoPoblada::setVectorColumna(const std::vector<int>& vectorColumna) {
    this->vectorColumna = vectorColumna;
}

std::vector<int> MatrizPocoPoblada::getVectorFila() const {
    return vectorFila;
}

void MatrizPocoPoblada::setVectorFila(const std::vector<int>& vectorFila) {
    this->vectorFila = vectorFila;
}