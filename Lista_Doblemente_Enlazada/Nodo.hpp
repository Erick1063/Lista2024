#ifndef Nodo_H
#define Nodo_H

class Nodo
{

public:
	Nodo(const int);	  // Constructor
	void setNext(Nodo *); // Modifica el nodo siguiente
	Nodo *getNext();	  // Obtenemos el nodo siguiente
	void setPrev(Nodo *); // Modificamos el nodo anterior
	Nodo *getPrev();	  // Obtenemos el nodo anterior
	int getData() const;  // Obtenemos la data

private:
	Nodo *next = nullptr; // Por predeterminado un nodo no apunta a nada por la derecha
	Nodo *prev = nullptr; // Por predeterminado un nodo no apunta a nada por la izquierda
	int data;			  // El dato del nodo
};

#endif