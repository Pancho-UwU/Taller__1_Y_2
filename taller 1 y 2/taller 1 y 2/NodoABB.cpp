#include "NodoABB.h"

NodoABB::NodoABB(int dato)
{
	this->dato = dato;
	this->hijoDer = nullptr;
	this->hijoIzq = nullptr;
}

NodoABB::~NodoABB()
{
	setHijoDer(nullptr);
	setHijoIzq(nullptr);	
}

int NodoABB::getDato()
{
	return this->dato;
}

NodoABB* NodoABB::getHijoIzq()
{
	return this->hijoIzq;
}

NodoABB* NodoABB::getHijoDer()
{
	return this->hijoDer;
}

void NodoABB::setDato(int dato)
{
	this->dato = dato;
}

void NodoABB::setHijoDer(NodoABB* nodo)
{
	this->hijoDer = nodo;
}

void NodoABB::setHijoIzq(NodoABB* nodo)
{
	this->hijoIzq = nodo;
}
