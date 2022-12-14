#ifndef _GATO_H_
#define _GATO_H_

#include<iostream>

using namespace std;

class Gato: public Animal{
	public:	
		void comunicar(){
			cout<<"Miau miuau" <<endl;
	}

};

#endif
