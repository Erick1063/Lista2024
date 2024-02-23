#include <iostream>
#include "Lista_simple.hpp"
using namespace std;



int main(){
	cout<<"----------------------------------"<<endl;
	cout<<"---------LISTAS SIMPLES-----------"<<endl;
	cout<<"----------------------------------"<<endl;
	cout<<"Creando Lista"<<endl;
	Lista_simple L(1);
	L.MostrarLista();
	cout<<"Pruba del pushFront"<<endl;
	L.PushFront(0);
	L.MostrarLista();
	cout<<"Prueba del pushBack"<<endl;
	L.PushBack(2);
	L.MostrarLista();
	cout<<"Prueba del popFront"<<endl;
	L.PopFront();
	L.MostrarLista();
	cout<<"Prueba del popBack"<<endl;
	L.PopBack();
	L.MostrarLista();
	
	
	
	
	
	
	return 0;
}