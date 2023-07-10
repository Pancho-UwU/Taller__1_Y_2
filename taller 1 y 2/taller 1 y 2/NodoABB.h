#pragma once
class NodoABB
{
private:
	int dato;
	NodoABB* hijoIzq;
	NodoABB* hijoDer;
public:
	NodoABB(int dato);
	~NodoABB();
	int getDato();
	NodoABB* getHijoIzq();
	NodoABB* getHijoDer();
	void setDato(int dato);
	void setHijoDer(NodoABB* nodo);
	void setHijoIzq(NodoABB* nodo);
};

