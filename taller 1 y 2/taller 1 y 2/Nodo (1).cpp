#include "nodo.h"

Nodo::Nodo(int valor) {
    this->valor = valor;
}

Nodo::~Nodo() {
}

int Nodo::getValor() const {
    return valor;
}

void Nodo::setValor(int valor) {
    this->valor = valor;
}