#include "Nodo_cola.hpp"

//Constructor
NodoCola::NodoCola(int data){
	this->data=data;
}

//getData (Obtener la data)
int NodoCola::getData(){
	return this->data;
}

//getNext (Obtiene a lo que apunta el nodo)
NodoCola * NodoCola::getNext(){
	return this->next;
}

//setNext (Modifico el next)
void NodoCola::setNext(NodoCola *Nnodo){
	this->next=Nnodo;
}
