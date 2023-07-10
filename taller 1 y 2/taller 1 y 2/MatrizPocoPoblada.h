#pragma once
#include <vector>
#include "nodo.h"

class MatrizPocoPoblada {
private:
    std::vector<int> vectorColumna;
    std::vector<int> vectorFila;
    std::vector<Nodo*> matriz;

public:
    MatrizPocoPoblada();
    ~MatrizPocoPoblada();

    void recorrerMatriz() const;
    void añadirNodo(int fila, int columna, int valor);
    void eliminarNodo(int fila, int columna);
    int obtenerNodo(int fila, int columna) const;

    // Getters y setters para los vectores columna y fila
    std::vector<int> getVectorColumna() const;
    void setVectorColumna(const std::vector<int>& vectorColumna);
    std::vector<int> getVectorFila() const;
    void setVectorFila(const std::vector<int>& vectorFila);
};

