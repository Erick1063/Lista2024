#include <iostream>
#include "Lista_simple.hpp"
using namespace::std;



int main(){
	Lista_simple L(1);
	L.PushFront(0);
	L.PushBack(2);
	L.MostrarLista();
	cout<<endl<<"---------------"<<endl;
	L.PopFront();
	L.MostrarLista();
	L.PopBack();
	cout<<endl<<"---------------"<<endl;
	L.MostrarLista();
	
	
	
	
	
	
	return 0;
}