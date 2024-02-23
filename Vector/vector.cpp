#include "vector.hpp"
#include <iostream>
using std::cout;
using std::endl;


//constructor
vector::vector(const int Dim){
	this->Array = new int [Dim];
	this->Dim=Dim;
	this->C=Dim;
}

//PushFront
void vector::pushFront(const int data){
	if(this->Dim == this->C)
	{
		this->Array[0]=data;
		this->C=C-1;
	}
	
	if(this->Dim-this->C == this->Dim)
	{
		cout<<"Vector lleno"<<endl;
	}
	else
	{
		/*
			this->C=this->C-1;
		int *Aux= new int[this->Dim];
		Aux[0]=data;
		for(int i=1 ; i<this->Dim ; i++  )
		{
			Aux[i]=this->Array[i-1];
		}
		*/
	
		
	}
}

//pushBack
void vector::pushBack(const int data){
	
	
}

//popFront
void vector::popFront(){
	
	
}

//popBack
void vector::popBack(){
	
	
	
}


//mostrar datos del vector
void vector::mostrarVector(){
	cout<<endl;
	cout<<"[ ";
	for(int i=0 ; i<(this->Dim-this->C);i++)
	{
		cout<<this->Array[0]<<" ";
	}
	cout<<" ]"<<endl;
}
