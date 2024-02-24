#include <iostream>
#include "vector.hpp"
using std::cout;
using std::endl;

int main()
{
	vector V(4);
	cout << "---------------------------------------" << endl;
	cout << "------ESTRUCTURA DE DATOS VECTOR-------" << endl;
	cout << "Prueba del pushFront en estructura de dato vector" << endl;
	cout<<"Imprimiendo vector sin nada"<<endl;
	V.mostrarVector();
	cout<<endl;
	cout<<"Probando haciendo un pushFront"<<endl;
	cout<<endl;
	V.pushFront(4);
	V.pushFront(3);
	V.pushFront(2);
	//V.pushFront(1);
	V.mostrarVector();
	//cout<<"Prueba del pushFront con vector lleno"<<endl;
	//V.pushFront(-1);	
	cout<<"Prueba del pushBack"<<endl;
	V.pushBack(5);
	V.mostrarVector();

	return 0;
}