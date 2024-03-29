#include <iostream>
using std::cout;
using std::endl;
#include "Lista_Cola.hpp"

int main()
{
	cout << "----------------------------" << endl;
	cout << "Pruebas de la lista con cola" << endl;
	cout << "----------------------------" << endl;
	cout << "Creacion de la lista" << endl;
	cout << "----------------------------" << endl;
	ListaCola L(1);
	L.mostrarLista();
	cout << "----------------------------" << endl;
	cout << "Prueba del pushFront" << endl;
	L.pushFront(0);
	L.mostrarLista();
	cout << "Prueba del pushBack" << endl;
	L.pushBack(2);
	L.mostrarLista();
	cout << "Prueba del popFront" << endl;
	L.popFront();
	L.mostrarLista();
	cout << "Prueba del popBack" << endl;
	L.popBack();
	L.mostrarLista();
	cout << "Vaciando lista" << endl;
	L.popFront();
	L.mostrarLista();
	return 0;
}