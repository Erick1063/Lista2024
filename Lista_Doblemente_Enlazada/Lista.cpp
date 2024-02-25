#include "Lista.hpp"
#include <iostream>
using std::cout;
using std::endl;
// Constructor
Lista::Lista(const int data)
{
	Nodo *Nnodo = new Nodo(data);
	this->head = Nnodo;
	this->tail = Nnodo;
}

void Lista::pushFront(const int data)
{
	Nodo *Nnodo = new Nodo(data);
	Nnodo->setNext(head);
	if (head != nullptr)
	{
		head->setPrev(Nnodo);
	}
	head = Nnodo;
	if (tail == nullptr)
	{
		tail = Nnodo;
	}
}

// pushBack : ingresa dato por detras
void Lista::pushBack(const int data)
{
	if (empty()==true)
	{
		pushFront(data);
	}
	else
	{
		Nodo *Nnodo = new Nodo(data);
		tail->setNext(Nnodo);
		Nnodo->setPrev(tail);
		tail = Nnodo;
	}
}
// popFront : Elimina dato por el frente
void Lista::popFront()
{
	if (empty() == true)
	{
		cout << "La lista esta vacia" << endl;
	}
	else
	{
		Nodo *Naux = head;
		head = Naux->getNext();
		head->setPrev(nullptr);
		delete Naux;
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
		if (head == tail)
		{
			delete head;
			head = tail = nullptr;
		}
		else
		{
			Nodo *Naux = tail;
			tail = tail->getPrev();
			tail->setNext(nullptr);
			delete Naux;
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