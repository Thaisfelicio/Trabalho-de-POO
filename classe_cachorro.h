#ifndef _CACHORRO_H_
#define _CACHORRO_H_

#include<iostream>

using namespace std;

class Cachorro: public Animal{
	public:
		string latir = "au au";
	
	
		void comunicar(){
			cout<<"Seu cachorro esta tentando se comunicar"<< latir <<endl;
		}
};

#endif
