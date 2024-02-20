#include "Lista_simple.hpp"

//constructor
Lista_simple::Lista_simple(int data){
	Nodo_simple *Nnodo= new Nodo_simple(data);
	head=Nnodo;
}

//pushFront
void Lista_simple::PushFront(int data){
	Nodo_simple *Nnodo= new Nodo_simple(data);
	Nnodo->setNext(head);
	head=Nnodo;
}

//pushBack
void Lista_simple::PushBack(int data){
	Nodo_simple *Nnodo = new Nodo_simple(data);
	Nodo_simple *Naux  = head;
	while(Naux->getNext() != nullptr)
	{
		Naux=Naux->getNext();
	}
	Naux->setNext(Nnodo);
}

//PopFront
void Lista_simple::PopFront(){
	Nodo_simple *Naux = head;
	head = head->getNext();
	delete Naux;
}

//Popback
void Lista_simple::PopBack(){
	Nodo_simple *Naux=head;
	while(Naux->getNext()->getNext() != nullptr)
	{
		Naux=Naux->getNext();
	}
	delete Naux->getNext();
	Naux->setNext(nullptr);
	
}




//Mostrar Lista
void Lista_simple::MostrarLista(){
	Nodo_simple *Naux = head;
	while(Naux != nullptr)
	{
		cout<<Naux->getData();
		Naux=Naux->getNext();
	}
}