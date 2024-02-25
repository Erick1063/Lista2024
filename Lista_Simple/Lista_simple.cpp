#include "Lista_simple.hpp"
// constructor
Lista_simple::Lista_simple(int data)
{
	Nodo_simple *Nnodo = new Nodo_simple(data); // Creamos un nuevo nodo
	head = Nnodo;								// Que head apunte a el nuevo nodo
}

// pushFront : mete el dato por el frente
void Lista_simple::PushFront(const int data)
{
	Nodo_simple *Nnodo = new Nodo_simple(data); // Creamos el nuevo nodo
	Nnodo->setNext(head);						// Que el nuevo nodo apunte a lo que apunta Head
	head = Nnodo;								// Que head apunte al nuevo nodo
}

// pushBack : mete el dato por detras
void Lista_simple::PushBack(const int data)
{
	Nodo_simple *Nnodo = new Nodo_simple(data); // Creamos el nuevo nodo
	Nodo_simple *Naux = head;					// Creamos un nuevo nodo auxiliar que apunte al primer elemento
	while (Naux->getNext() != nullptr)			// Buscamos el ultimo nodo
	{
		Naux = Naux->getNext();
	}
	Naux->setNext(Nnodo); // Que el ultimo nodo apunte al nuevo nodo
	// delete Naux; //Lo agregue cuando estaba haciendo el informe
}

// PopFront : Elimina dato por el frente
void Lista_simple::PopFront()
{
	Nodo_simple *Naux = head; // Creamos un nodo auxiliar que almacene el primer nodo
	head = head->getNext();	  // que Head apunte al 2do nodo
	delete Naux;			  // Eliminamos Naux que vendria siendo el primer nodo
}

// Popback : Elimina dato por detras
void Lista_simple::PopBack()
{
	Nodo_simple *Naux = head;					  // Creamos un nodo auxiliar que apunte a lo que apunta Head
	while (Naux->getNext()->getNext() != nullptr) // Buscamos el Penultimo nodo
	{
		Naux = Naux->getNext(); // Actualizamos el nodo auxiliar para recorrer
	}
	delete Naux->getNext(); // Eliminamos el ultimo nodo
	Naux->setNext(nullptr); // Que el ultimo nodo apunte a nullptr
}
// Mostrar Lista
void Lista_simple::MostrarLista()
{
	if (this->head == nullptr)
	{
		cout << "Lista vacia" << endl;
	}
	else
	{
		Nodo_simple *Naux = head;
		while (Naux != nullptr)
		{
			cout << Naux->getData();
			Naux = Naux->getNext();
		}
		cout << endl
			 << "----------------------------" << endl;
	}
}