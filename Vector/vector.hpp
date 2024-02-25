#ifndef vector_H
#define vector_H

class vector
{

public:
	vector(const int);		   // constructor
	void pushFront(const int); // meter dato por el frente  O(n)
	void pushBack(const int);  // meter dato por detras     O(1)
	void mostrarVector();	   // imprime los datos del vector
	void popFront();		   // elimina dato por el frente  O(n)
	void popBack();			   // elimina dato por detras  O(1)

private:
	int *Array; // Apuntador de tipo entero
	int Dim;	// tamano del vector
	int C;		// Cantidad de elementos del vector
};

#endif