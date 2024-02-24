#ifndef vector_H
#define vector_H

class vector
{

public:
	vector(const int);  //constructor
	void pushFront(const int);  //meter dato por el frente
	void pushBack(const int);//meter dato por detras
	void mostrarVector(); //imprime los datos del vector
	void popFront();   //elimina dato por el frente
	void popBack();  //elimina dato por detras

private:
	int *Array;  //Apuntador de tipo entero
	int Dim;    //tamano del vector
	int C;      //cantidad disponible del vector
};

#endif