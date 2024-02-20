#ifndef NODO
#define NODO_H
#include <iostream>
using namespace::std;

class  Nodo_simple{
	
	public:
		Nodo_simple(int);              //Constructor
		int getData();                 //Funcion obtiene data
		Nodo_simple *getNext();        //Funcion para obtener el dato privado next
		void setNext(Nodo_simple *);   //Funcion para poder cambiar el dato privado next
	private:
		int data;  //Dato del Nodo
		Nodo_simple *next=nullptr;//Nodo apuntador al siguiente Nodo
};

#endif