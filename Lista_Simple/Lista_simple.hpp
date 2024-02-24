#ifndef ListaSimple_H
#define ListaSimple_H
#include "Nodo_simple.hpp"
class Lista_simple
{

public:
	Lista_simple(const int);   // Constructor de Lista
	void PushFront(const int); // Agregar dato por el frente  O(1)
	void PushBack(const int);  // Agregar dato por detras     O(n)
	void PopFront();		   // Elimina el dato por el frente O(1)
	void PopBack();			   // Elimina el dato por detras   O(n)
	void MostrarLista();	   // Imprime los datos de la lista

private:
	Nodo_simple *head = nullptr;
};

#endif