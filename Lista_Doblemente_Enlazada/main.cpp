#include <iostream>
#include "Lista.hpp"
using std::cout;
using std::endl;


int main(){
	cout<<"----------------------------------"<<endl;
	cout<<"PRUEBA DE LISTA DOBLEMENTE ENLAZADAS CON COLA"<<endl;
	cout<<"----------------------------------"<<endl;
	cout<<"Creacion de la lista"<<endl;
	cout<<"----------------------------"<<endl;
	Lista L(1);
	L.mostrarLista();
	cout<<"----------------------------"<<endl;
	cout<<"Prueba del pushFront"<<endl;
	L.pushFront(0);
	L.mostrarLista();
	cout<<"Prueba del pushBack"<<endl;
	L.pushBack(2);
	L.mostrarLista();
	cout<<"Prueba del popFront"<<endl;
	L.popFront();
	L.mostrarLista();
	cout<<"Prueba del popBack"<<endl;
	L.popBack();
	L.mostrarLista();
	cout<<"Vaciando la lista"<<endl;
	L.popBack();
	L.mostrarLista();
	
	
	return 0;
}