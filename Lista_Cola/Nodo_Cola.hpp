#ifndef NodoCola_H
#define NodoCola_H

class NodoCola{
	
	public:
		NodoCola(int);           //Constructor 
		int getData();           //Retorna el dato del nodo
		NodoCola *getNext();     //Retorna el siguiente nodo a quien apunta
		void setNext(NodoCola *); //Cambia a lo que apunta el nodo
		
	private:
		NodoCola *next =nullptr;
		int data;
};

#endif