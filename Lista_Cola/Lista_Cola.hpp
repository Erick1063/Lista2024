#ifndef ListaCola_H
#define ListaCola_H
#include "Nodo_Cola.hpp"
class  ListaCola{
	
	public:
		ListaCola(int);
		
	private:
		NodoCola *head = nullptr;
		NodoCola *tail = nullptr;
};
#endif