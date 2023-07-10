#pragma once


class Nodo {
private:
    int valor;

public:
    Nodo(int valor);
    ~Nodo();

    int getValor() const;
    void setValor(int valor);
};

