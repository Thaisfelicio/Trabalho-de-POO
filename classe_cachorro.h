#include<iostream>

using namespace std;

class Cachorro: public Animal{
	string latir = "au au";
	
	public:
		void comunicar(){
			cout<<"Seu cachorro esta tentando se comunicar"<< latir <<endl;
		}
};
