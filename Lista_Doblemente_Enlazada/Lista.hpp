#ifndef Lista_H
#define Lista_H
#include "Nodo.hpp"

class Lista
{

public:
	Lista(const int);		   // Constructor
	void pushFront(const int); // Ingresamos dato por el frente O(1)
	void pushBack(const int);  // Ingresamos dato por detras    O(1)
	void popFront();		   // Eliminamos elemento por el frente O(1)
	void popBack();			   // Eliminamos dato por detras       O(1)
	bool empty() const;		   // Nos preguntamos si la lista esta vacia
	void mostrarLista();	   // Imprimimos los datos que tenga la Lista

private:
	Nodo *head = nullptr; // Head apunta al primer elemento de la lista
	Nodo *tail = nullptr; // Tail apunta al ultimo elemento de la lista
};

#endif