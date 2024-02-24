#include "vector.hpp"
#include <iostream>
using std::cout;
using std::endl;

// constructor
vector::vector(const int Dim)
{
	this->Array = new int[Dim];
	this->Dim = Dim;
	this->C = 0;
}

// PushFront
void vector::pushFront(const int data)
{
	if(this->C == 0)
	{
		//cout<<"C: "<<this->C<<" data : "<<data<<endl;
		this->C = this->C +1;
		this->Array[0]=data;
	}
	else
	{
		if(this->C == this->Dim)
		{
			cout<<"Vector lleno"<<endl;
		}
		else
		{
			//cout<<"C: "<<this->C<<" data : "<<data<<endl;
		for(int i=this->C ; i>0  ; i--  )
		{
			//cout<<"i: "<<i<<" data : "<<data<<endl;
			this->Array[i]=this->Array[i-1];
		}
		this->Array[0]=data;
		this->C=this->C+1; 
		//cout<<"C: "<<this->C<<" data : "<<data<<endl;
		}	
	}
}

// pushBack
void vector::pushBack(const int data){
	if(this->C == this->Dim)
	{
		cout<<"Error, el vector esta lleno"<<endl;
	}
	else
	{
		this->Array[this->C]=data;
		this->C=this->C+1;
	}	
}
// popFront
void vector::popFront()
{
	if(this->C == 0)
	{
		cout<<"Error, Vector vacio"<<endl;
	}
	else
	{
		//
	}
}

// popBack
void vector::popBack()
{
	
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
