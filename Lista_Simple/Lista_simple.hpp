#ifndef ListaSimple_H
#define ListaSimple_H
#include "Nodo_simple.hpp"
class Lista_simple
{

public:
	Lista_simple(const int);   // constructor de Lista
	void PushFront(const int); // Agregar dato por el frente
	void PushBack(const int);  // Agregar dato por detras
	void PopFront();		   // Elimina el dato por el frente
	void PopBack();			   // Elimina el dato por detras
	void MostrarLista();

private:
	Nodo_simple *head = nullptr;
};

#endif