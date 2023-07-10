#include "ABB.h"
#include <iostream>
#include <stack>
using namespace std;
ABB::ABB(int dato)
{
	this->raiz = new NodoABB(dato);
}

ABB::~ABB()
{
	
}

void ABB::recorrer()
{

	recorrerRec(this->raiz);
}

void ABB::recorrerRec(NodoABB* p)
{
	if (!p)
	{
		return;
	}
	recorrerRec(p->getHijoIzq());
	cout << p->getDato() << endl;
	recorrerRec(p->getHijoDer());

}

NodoABB* ABB::obtenerNodo(int dato)
{
	return ObtenerNodoRec(this->raiz, dato);
}

NodoABB* ABB::ObtenerNodoRec(NodoABB* p, int dato)
{
	if(!p || dato == p->getDato())
	{
		return p;
	}
	NodoABB* recIzq = ObtenerNodoRec(p->getHijoIzq(), dato);
	if(recIzq !=  nullptr )
	{
		return recIzq;
	}
	NodoABB* recDer = ObtenerNodoRec(p->getHijoDer(), dato);
	return recDer;
}

void ABB::agregar(int dato)
{
	stack<NodoABB*> pilaAux;
	NodoABB* pAux = this->raiz;
	bool agregado = false;
	NodoABB* agregar = new NodoABB(dato);
	while (1)
	{
		while(pAux)
		{
			if(!pAux && agregado == false)
			{
				pAux->setHijoIzq(agregar);
				agregado = true;
			}
			pilaAux.push(pAux);
			pAux->getHijoIzq();
			
		}
		if(!pilaAux.empty())
		{
			pAux = pilaAux.top();
			cout << pAux << endl;
			pAux = pAux->getHijoDer();

		}
		else
		{
			break;
		}
	}
}

bool ABB::eliminarNodo(int dato)
{
	return eliminarNodoRec(this->raiz, dato);
}

bool ABB::eliminarNodoRec(NodoABB* rec, int dato)
{
	if(rec->getHijoDer()->getDato() == dato || rec->getHijoIzq()->getDato() == dato )
	{
		rec->~NodoABB();
		return true;
	}
	eliminarNodoRec(rec->getHijoIzq(), dato);
	eliminarNodoRec(rec->getHijoDer(), dato);
	
}




