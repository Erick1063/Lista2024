#ifndef ListaCola_H
#define ListaCola_H
#include "Nodo_Cola.hpp"
class ListaCola
{

public:
	ListaCola(const int);	   // Constructor
	void pushFront(const int); // Ingresamos dato por el frente  O(1)
	void pushBack(const int);  // Ingresamos dato por detras     O(1)
	void popFront();		   // Eliminamos dato por el frente  O(1)
	void popBack();			   // Eliminamos dato por detras     O(n)
	void mostrarLista();	   // Imprimimos los elementos de la lista
	bool empty() const;		   // Preguntamos si la lista se encuentra o no vacia

private:
	NodoCola *head = nullptr;
	NodoCola *tail = nullptr;
};
#endif