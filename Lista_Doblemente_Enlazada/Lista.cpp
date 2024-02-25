#include "Lista.hpp"
#include <iostream>
using std::cout;
using std::endl;
// Constructor
Lista::Lista(const int data)
{
	Nodo *Nnodo = new Nodo(data); // Creamos el nuevo nodo
	this->head = Nnodo;			  // Que head apunte al nuevo nodo
	this->tail = Nnodo;			  // Que tail apunte al nuevo nodo
}

void Lista::pushFront(const int data)
{
	Nodo *Nnodo = new Nodo(data); // Creamos un nuevo nodo
	Nnodo->setNext(head);		  // Que el nuevo nodo apunte al primer elemento por medio de head
	if (head != nullptr)		  // Si la lista esta vacia que el nuevo nodo apunte a nada por la izquierda
	{
		head->setPrev(Nnodo);
	}
	head = Nnodo;		 // Que head apunte al nuevo nodo
	if (tail == nullptr) // Si la lista esta vacia que tail apunte al nuevo nodo
	{
		tail = Nnodo;
	}
}

// pushBack : ingresa dato por detras
void Lista::pushBack(const int data)
{
	if (empty() == true)
	{
		pushFront(data);
	}
	else
	{
		Nodo *Nnodo = new Nodo(data); // Creamos el nuevo nodo
		tail->setNext(Nnodo);		  // Que el ultimo nodo apunte al nuevo nodo
		Nnodo->setPrev(tail);		  // Que el nuevo nodo apunte al ultimo nodo quiero luego sera el penultimo
		tail = Nnodo;				  // Que tail apunte al nuevo nodo
	}
}
// popFront : Elimina dato por el frente
void Lista::popFront()
{
	if (empty() == true) // Si la lista esta vacia , da una alerta de que esta vacia
	{
		cout << "La lista esta vacia" << endl;
	}
	else
	{
		Nodo *Naux = head;		// Creamos un nodo auxiliar que almacene el primer elemento
		head = Naux->getNext(); // Que head apunte al segundo nodo
		head->setPrev(nullptr); // Que ahora el nuevo primer elemento apunte a null por la izquierda
		delete Naux;			// Eliminamos el nodo auxiliar
	}
}
// popBack : Elimina dato por detras
void Lista::popBack()
{
	if (empty())
	{
		cout << "La lista está vacía" << endl;
	}
	else
	{
		if (head == tail) // Sinifica que solo hay un nodo
		{
			delete head;
			head = tail = nullptr; // Vaciamos la lista haciendo que tanto Head y Tail apunten a nullptr
		}
		else
		{
			Nodo *Naux = tail;		// Creamos un nodo auxiliar el cual almacenara el ultimo nodo
			tail = tail->getPrev(); // Que Tail apunte al penultimo nodo
			tail->setNext(nullptr); // Que ahora el nuevo ultimo elemento apunte a nullptr por la derecha
			delete Naux;			// Eliminamos el nodo auxiliar
		}
	}
}

// Muestra lo datos de la lista
void Lista::mostrarLista()
{
	if (empty() == true)
	{
		cout << "Lista esta vacia" << endl;
	}
	else
	{
		Nodo *Naux = head;
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
bool Lista::empty() const
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