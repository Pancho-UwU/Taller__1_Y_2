#pragma once
#include "NodoABB.h"
#include <iostream>
#include <stack>
using namespace std;
class ABB
{
private:
	NodoABB* raiz;
public:
	ABB(int dato);
	~ABB();
	void recorrer();
	void recorrerRec(NodoABB* p);
	NodoABB* obtenerNodo(int dato);
	NodoABB* ObtenerNodoRec(NodoABB* p, int dato);
	void agregar(int dato);
	bool eliminarNodo(int dato);
	bool eliminarNodoRec(NodoABB* rec, int dato);

};

