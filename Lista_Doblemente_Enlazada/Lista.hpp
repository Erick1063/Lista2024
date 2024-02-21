#ifndef Lista_H
#define Lista_H

class  Lista{

	public:
		Lista(int);
		void pushFront(int);
		void pushBack(int);
		void popFront();
		void popBack();
		bool empty();
		void mostraLista();

	private:
		Nodo *head=nullptr;
		Nodo *tail=nullptr;
};

#endif