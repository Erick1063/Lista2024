#ifndef Lista_H
#define Lista_H
#include "Nodo.hpp"

class Lista
{

public:
	Lista(const int);
	void pushFront(const int);
	void pushBack(const int);
	void popFront();
	void popBack();
	bool empty() const;
	void mostrarLista();

private:
	Nodo *head = nullptr;
	Nodo *tail = nullptr;
};

#endif