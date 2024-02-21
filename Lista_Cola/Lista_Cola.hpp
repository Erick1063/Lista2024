#ifndef ListaCola_H
#define ListaCola_H
#include "Nodo_Cola.hpp"
class  ListaCola{
	
	public:
		ListaCola(int);
		void pushFront(int);
		void pushBack(int);
		void popFront();
		void popBack();
		void mostrarLista();
		bool empty();
		
	private:
		NodoCola *head = nullptr;
		NodoCola *tail = nullptr;
};
#endif