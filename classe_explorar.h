#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

class Explorar{
private:
	int quantComida;
	
public:
	int getQuantidade(){
		return this->quantComida;
	}
	
	void setQuantidade(int comida){
		this->quantComida = comida;
	}
	
	int explorar(){
		srand(time(0));	

		int numGerado = 1+(rand()%10);
		int Comida = 0;
		if(numGerado % 2 == 0){
			Comida = -10;
			setQuantidade(Comida);
			return getQuantidade();
		}
		else{
			Comida = 30;
			setQuantidade(Comida);
			return getQuantidade(); 
		}	
	}
	
	
	
};


