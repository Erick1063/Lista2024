#include "Nodo_simple.hpp"


//Constructor del Nodo
Nodo_simple::Nodo_simple(const int data){
	this->data=data;
}

//Funcion para obtener la data
int Nodo_simple::getData()const{
	return this->data;
}

//Funcion para obtener el next
Nodo_simple *Nodo_simple::getNext()const{
	return this->next;
}

//Funcion para cambiar el next
void Nodo_simple::setNext(Nodo_simple *Nnodo ){
	this->next=Nnodo;
}