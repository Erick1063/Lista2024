#ifndef Nodo_H
#define Nodo_H

class  Nodo{

	public:
		Nodo(int);
		void setNext(Nodo *);
		Nodo *getNext();
		void setPre();
		Nodo *getPrev(Nodo *);
		void setData(int );l
		int getData();
	private:
		Nodo *next=nullptr;
		Nodo *prev=nullptr;
		int data;
};

#endif