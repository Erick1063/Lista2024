#ifndef ListaCola_H
#define ListaCola_H
#include "Nodo_Cola.hpp"
class ListaCola
{

public:
	ListaCola(const int);
	void pushFront(const int);
	void pushBack(const int);
	void popFront();
	void popBack();
	void mostrarLista();
	bool empty() const;

private:
	NodoCola *head = nullptr;
	NodoCola *tail = nullptr;
};
#endif