#include<iostream>
#include<vector>

class Acoes{
  private:
  	vector<string> comidaEncontrada;
  public:
/*+++++++++++++++++++++++++++++++++ GETTERS +++++++++++++++++++++++++++++++++++++*/   
    string getObjetos(){
    	return this->comidaEncontrada;
	}
	
/*+++++++++++++++++++++++++++++++++ SETTERS +++++++++++++++++++++++++++++++++++++*/  
	void setObjetos(string comida){
		this->comidaEncontrada = comida;
	}
	
	string cavar(){
		
	}
};
