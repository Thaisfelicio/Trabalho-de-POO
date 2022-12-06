#include<iostream>

using namespace std;

class Gato: public Animal{
	string miar = "miau";

	public:
		void comunicar(){
			cout<<"Seu gato esta tentando se comunicar "<< miar <<endl;
		}
};
