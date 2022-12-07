#ifndef _GATO_H_
#define _GATO_H_

#include<iostream>

using namespace std;

class Gato: public Animal{
	public:
		string miar = "miau";

	
		void comunicar(){
			cout<<"Seu gato esta tentando se comunicar "<< miar <<endl;
		}
};

#endif
