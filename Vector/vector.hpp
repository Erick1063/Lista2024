#ifndef vector_H
#define vector_H

class  vector{

	public:
		vector(const int );
		void pushFront(const int );
		void pushBack(const int);
		void mostrarVector();
		void popFront();
		void popBack();
		
	private:
		int *Array;
		int Dim;
		int C;
};

#endif