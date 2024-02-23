#ifndef Nodo_H
#define Nodo_H

class  Nodo{

	public:
		Nodo(const int);
		void setNext(Nodo *);
		Nodo *getNext();
		void setPrev( Nodo *);
		Nodo *getPrev();
		int getData()const;
	private:
		Nodo *next=nullptr;
		Nodo *prev=nullptr;
		int data;
};

#endif