#include "Lista_Cola.hpp"
#include <iostream>
using std::cout;
using std::endl;

// Constructor
ListaCola::ListaCola(const int data)
{
	NodoCola *Nnodo = new NodoCola(data); // Creamos un nuevo nodo
	this->head = Nnodo;					  // Que head apunte a ese nuevo nodo
	this->tail = Nnodo;					  // Que tail apunte a ese nuevo nodo
}

// PushFront :Ingresamos dato por el frente
void ListaCola::pushFront(const int data)
{
	NodoCola *Nnodo = new NodoCola(data); // Creamos un nuevo nodo
	Nnodo->setNext(head);				  // Que el nuevo nodo apunte a lo que apunta head
	head = Nnodo;						  // Que head apunte ahora al nuevo nodo
}

// pushBack : Ingresamos dato por detras
void ListaCola::pushBack(const int data)
{
	if (empty() == true) // Preguntamos si la lista esta vacia
	{
		pushFront(data);
	}
	else
	{
		NodoCola *Nnodo = new NodoCola(data); // Creamos el nuevo nodo
		tail->setNext(Nnodo);				  // Que el ultimo nodo apunte al nuevo nodo
		tail = Nnodo;						  // Que tail apunte al nuevo nodo
	}
}
// popFront :  Eliminamos dato por el frente
void ListaCola::popFront()
{
	if (empty() == true) // Preguntamos si la lista se encuentra vacia
	{
		cout << "La lista esta vacia" << endl;
	}
	else
	{
		NodoCola *Naux = head;	// Creamos un nodo auxiliar que almacene el primer nodo
		head = head->getNext(); // Que head apunte al segundo nodo por medio de head->next
		delete Naux;			// Eliminamos el nodo auxiliar el cual contiene al primer nodo
	}
}
// popBack : Eliminamos dato por detras
void ListaCola::popBack()
{
	if (empty() == true) // Preguntamos si la lista esta vacia
	{
		cout << "La lista esta vacia" << endl;
	}
	else
	{
		NodoCola *Naux = head;						  // Creamos un nodo auxiliar
		while (Naux->getNext()->getNext() != nullptr) // Buscamos el ultimo nodo pero con 2 pasos de anticipacion
		{
			Naux = Naux->getNext(); // Actualizamos el nodo auxiliar para recorrer
		}
		NodoCola *Naux2 = Naux->getNext(); // Creamos un segundo nodo auxiliar para almacenar el penultimo nodo
		Naux->setNext(nullptr);			   // Que el penultimo nodo apunte a nullptr
		tail = Naux;					   // Que tail apunte al penultimo nodo quiero ahora sera el ultimo
		delete Naux2;					   // Eliminamos el nodo auxiliar
	}
}

// Mostrar datos de la lista
void ListaCola::mostrarLista()
{
	if (empty() == true)
	{
		cout << "Lista vacia" << endl;
	}
	else
	{
		NodoCola *Naux = head;
		cout << endl;
		while (Naux != nullptr)
		{
			cout << Naux->getData();
			Naux = Naux->getNext();
		}
		cout << endl;
		cout << "----------------------------" << endl;
	}
}

// empty Lista vacia?  false=llena true =vacia
bool ListaCola::empty() const
{
	if (head != nullptr && tail != nullptr)
	{
		return false;
	}
	else
	{
		return true;
	}
}