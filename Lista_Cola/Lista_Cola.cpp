#include "Lista_Cola.hpp"
#include<iostream>
using std::cout;
using std::endl;

//constructor
ListaCola::ListaCola(int data){
	NodoCola *Nnodo=new NodoCola(data);
	this->head=Nnodo;
	this->tail=Nnodo;
}

//PushFront
void ListaCola::pushFront(int data){
	NodoCola *Nnodo=new NodoCola(data);
	Nnodo->setNext(head);
	head=Nnodo;	
}

//pushBack
void ListaCola::pushBack(int data){
	if(empty()==true){
		pushFront(data);
	}
	else
	{
		NodoCola *Nnodo=new NodoCola(data);
	    tail->setNext(Nnodo);
	    tail=Nnodo;
	}
}
//popFront
void ListaCola::popFront(){
	if(empty()==true)
	{
		cout<<"La lista esta vacia"<<endl;
	}
	else
	{
		NodoCola *Naux=head;
		head=head->getNext();
		delete Naux;
	}
}
//popBack
void ListaCola::popBack(){
	if(empty()==true)
	{
		cout<<"La lista esta vacia"<<endl;
	}
	else
	{
		NodoCola *Naux=head;
	    while(Naux->getNext()->getNext()!=nullptr)
	    {
	    	Naux=Naux->getNext();
		}
		NodoCola *Naux2=Naux->getNext();
		Naux->setNext(nullptr);
		tail=Naux;
		delete Naux2;
		
	}
	
}

//Mostrar datos de la lista
void ListaCola::mostrarLista(){
	NodoCola *Naux = head;
	cout<<endl;
	while(Naux != nullptr){
		cout<<Naux->getData();
		Naux=Naux->getNext();
	}
	cout<<endl;
	cout<<"----------------------------"<<endl;
}

//empty Lista vacia?  false=llena true =vacia
bool ListaCola::empty(){
	if(head !=nullptr && tail !=nullptr)
	{
		return false;
	}
	else
	{
		return true;
	}
}