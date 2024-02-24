#include "Lista.hpp"
#include <iostream>
using std::cout;
using std::endl;
// constructor
Lista::Lista(const int data)
{
	Nodo *Nnodo = new Nodo(data);
	this->head = Nnodo;
	this->tail = Nnodo;
}

// PushFront
void Lista::pushFront(const int data)
{
	Nodo *Nnodo = new Nodo(data);
	Nnodo->setNext(head);
	head = Nnodo;
}

// pushBack
void Lista::pushBack(const int data)
{
	if (empty() == true)
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
// popFront
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
// popBack
void Lista::popBack()
{
	if (empty() == true)
	{
		cout << "La lista esta vacia" << endl;
	}
	else
	{
		Nodo *Naux = tail;
		Naux->getPrev()->setNext(nullptr);
		tail = Naux->getPrev();
		delete Naux;
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