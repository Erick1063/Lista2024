#include <iostream>
#include "vector.hpp"
using std::cout;
using std::endl;

int main()
{
	vector V(4);
	cout << "---------------------------------------" << endl;
	cout << "------ESTRUCTURA DE DATOS VECTOR-------" << endl;
	cout<<"Imprimiendo vector sin nada (Dim=4)"<<endl;
	cout<<"Vector 1: ";
	V.mostrarVector();
	cout<<"Probando haciendo un pushFront (con vector vacio)"<<endl;
	V.pushFront(4);
	cout<<"Vector 1: ";
	V.mostrarVector();
	cout<<"Probando pushFront hasta llenarlo"<<endl;
	V.pushFront(3);
	V.pushFront(2);
	V.pushFront(1);
	V.mostrarVector();
	cout<<"Prueba del pushFront con vector lleno"<<endl;
	cout<<"Vector 1: ";
	V.pushFront(-1);	
	cout<<"Prueba del pushBack (con vector lleno)"<<endl;
	V.pushBack(2);
	cout<<"Creando nuevo vector llamado vector 2, dim=4  , "<<endl;
	vector V2(4);
	cout<<"Haciendo pushFront , luego pushBack al vector nuevo"<<endl;
	V2.pushFront(4); 
	V2.pushBack(5);
	cout<<"Vector 2: ";
	V2.mostrarVector();
	cout<<"Prueba del popFront"<<endl;
	cout<<"Vector 2: ";
	V2.popFront();
	V2.mostrarVector();
	cout<<"Prueba del popBack"<<endl;
	V2.popBack();
	cout<<"Vector 2: ";
	V2.mostrarVector();
	cout<<"Prueba del pushBack (con vector vacio)"<<endl;
	V2.pushBack(6);
	cout<<"Vector 2 : ";
	V2.mostrarVector();
	cout<<"Nueva prueba del pushBack pero esta vez con un elemento dentro"<<endl;
	V2.pushBack(7);
	cout<<"Vector 2: ";
	V2.mostrarVector();

	return 0;
}