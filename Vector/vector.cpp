#include "vector.hpp"
#include <iostream>
using std::cout;
using std::endl;

// constructor
vector::vector(const int Dim)
{
	this->Array = new int[Dim]; // Creamos nuestro arreglo con una Dimension especifica
	this->Dim = Dim;			// Iniciamos nuestro dim con el tamano de nuestro arreglo
	this->C = 0;				// Inicializamos nuestro contador, el cual llevara la cuenta de espacios cubiertos
}

// PushFront : mete el dato por el frente
void vector::pushFront(const int data)
{
	if (this->C == 0) // esta el vector vacio?
	{
		// cout<<"C: "<<this->C<<" data : "<<data<<endl;
		this->C = this->C + 1; // Actualizamos nuestro contador
		this->Array[0] = data; // Metemos el dato en la primer posicion
	}
	else
	{
		if (this->C == this->Dim) // esta el vector lleno?
		{
			cout << "Error, El Vector esta lleno" << endl;
		}
		else
		{
			// cout<<"C: "<<this->C<<" data : "<<data<<endl;
			for (int i = this->C; i > 0; i--) // los datos se mueven una posicion a la derecha
			{
				// cout<<"i: "<<i<<" data : "<<data<<endl;
				this->Array[i] = this->Array[i - 1];
			}
			this->Array[0] = data;
			this->C = this->C + 1;
			// cout<<"C: "<<this->C<<" data : "<<data<<endl;
		}
	}
}

// pushBack : ingresa el dato por detras
void vector::pushBack(const int data)
{
	if (this->C == this->Dim) // Esta el vector lleno?
	{
		cout << "Error, el vector esta lleno" << endl;
	}
	else
	{
		this->Array[this->C] = data; // Ingresamos el dato en la ultima posicion en base a nuestro contador
		this->C = this->C + 1;		 // Actualizamos nuestro contador
	}
}
// popFront : elimina dato por el frente
void vector::popFront()
{
	if (this->C == 0) // Esta vacio el vector?
	{
		cout << "Error, Vector vacio" << endl;
	}
	else
	{
		int *Aux = new int[this->Dim];	  // auxiliar
		for (int i = 0; i < this->C; i++) // se mueve una posicion, para eliminar el primer elemento
		{								  // y se almacena en el auxiliar
			Aux[i] = this->Array[i + 1];
		}

		for (int i = 0; i < this->C; i++) // se ingresan los datos en la posicion correspondiente
		{								  // pero esta vez al vector original
			this->Array[i] = Aux[i];
		}
		delete Aux;			   // Eliminamos el arreglo auxiliar creado
		this->C = this->C - 1; // Actualizamos nuestro contador
	}
}

// popBack : elimina dato por detras
void vector::popBack()
{
	if (this->C == 0) // el vector esta vacio?
	{
		cout << "Error, el vector esta vacio" << endl;
	}
	else
	{
		this->C = this->C - 1; // Solamente actualizamos nuestro contador
	}
}

// mostrar datos del vector
void vector::mostrarVector()
{
	if (this->C == 0)
	{
		cout << "Vector vacío" << endl;
	}
	else
	{
		cout << "[ ";
		for (int i = 0; i < this->C; ++i)
		{
			cout << this->Array[i] << " ";
		}
		cout << "]" << endl;
	}
}
