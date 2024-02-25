#ifndef NodoCola_H
#define NodoCola_H

class NodoCola
{

public:
	NodoCola(const int);	  // Constructor
	int getData() const;	  // Retorna el dato del nodo
	NodoCola *getNext();	  // Retorna el siguiente nodo a quien apunta
	void setNext(NodoCola *); // Cambia a lo que apunta el nodo

private:
	NodoCola *next = nullptr; // Por defecto los nodos apuntan a nullptr
	int data;				  // El dato del nodo
};

#endif