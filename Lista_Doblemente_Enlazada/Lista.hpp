#ifndef Lista_H
#define Lista_H
#include "Nodo.hpp"

class  Lista{

	public:
		Lista(int);
		void pushFront(int);
		void pushBack(int);
		void popFront();
		void popBack();
		bool empty();
		void mostrarLista();

	private:
		Nodo *head=nullptr;
		Nodo *tail=nullptr;
};

#endif