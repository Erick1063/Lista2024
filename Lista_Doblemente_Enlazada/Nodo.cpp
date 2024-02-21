#include "Nodo.hpp"
#include <iostream>
using std::cout;
using std::endl;

//constructor
Nodo::Nodo(int data){
	this->data=data;
	this->prev=nullptr;
	this->next=nullptr;
}

//retorna la data del nodo
int Nodo::getData(){
	return this->data;
}

//setNext: cambia a lo que apunta next
void Nodo::setNext(Nodo *Nnodo){
	this->next=Nnodo;
}
//setPrev: Cambia a lo que apunta el prev
void Nodo::setPrev(Nodo *Nnodo){
	this->prev=Nnodo;
}

//getNext : devuelve a lo que apunta next
Nodo *Nodo::getNext(){
	return this->next;
}

//getPrev : Devuelve a lo que apunta prev
Nodo *Nodo::getPrev(){
	return this->prev;
}