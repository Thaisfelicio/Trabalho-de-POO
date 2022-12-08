/******************************************************************************
PROJETO:

faça uma aplicação que contenha ao menos duas classes, com os seguintes requisitos:

*ao menos uma subclasse - temos gato e cachorro
*ao menos uma agregação - temos acao
*usar polimorfismo - a Raça
*ao menos um tipo de criação de objetos - criar bicho
*ao menos um tipo de edição de objetos - editar nome
*ao menos dois tipos de apresentação de dados de objetos - a fome atual

*******************************************************************************/
#include <iostream>
//#include <stdlib>

using namespace std;

#include "classe_Acoes.h"

/*_____________________________________CLASS_______________________________________*/
class Animal{
    private:
    
        string nome;
        int nivelFome;
        string raca;
        Acoes acao;//agregação
    
    public:
/*+++++++++++++++++++++++++++++++++ GETTERS +++++++++++++++++++++++++++++++++++++*/   
    Acoes getAcao(){
        return this -> acao;
    }
//=============================================================================//
    string getNome(){
        return this -> nome;
    }
//=============================================================================//
    int getFome(){
        return this -> nivelFome;
    }
//=============================================================================//
    string getRaca(){
        return this -> raca;
    }
/*+++++++++++++++++++++++++++++++++ SETTERS +++++++++++++++++++++++++++++++++++++*/  
    void setAcao(Acoes Acao){
        this -> acao = Acao;
    }
//=============================================================================//
    void setNome(string NOME){
        this -> nome = NOME;
    }
//=============================================================================//
    void setFome(int Fome){
        this -> nivelFome = Fome;
    }
//=============================================================================//
	void setRaca(string RACA){
        this -> raca = RACA;
    }
//=============================================================================//
	
	virtual void comunicar(){
		
	}
    
/*+++++++++++++++++++++++++++++++++ LÓGICA +++++++++++++++++++++++++++++++++++++*/   

//    void calculaFome(int fomeAtual){
//        
//        int fomeMaxima = 100;
//        if(setAcao().getObjeto())
//        
//        if(fomeAtual > fomeMaxima){
//        	cout<<"---- GAME OVER ----"<<endl;
//        	cout<<"Seu pet morreu"<<endl;
//		}
//		return fomeAtual;
//    }
    
    Animal calculaFome(Animal pet){
    	int fomeMaxima = 100;
    	
    	if(this->getFome() > fomeMaxima){
    		cout<<"---- GAME OVER ----"<<endl;
        	cout<<"Seu pet morreu"<<endl;
		}
		return pet;
	}

};

#include "classe_cachorro.h"
#include "classe_gato.h"

int menuPrincipal(){
    int choice;
    
    
    do{
    	cout<<"***************************************************"<<endl;
    	cout<<"BEM VINDO(A) AO HUNGRY'S PET";
    	cout<<"\n***************************************************"<<endl;
        cout<<"ESCOLHA SEU PET"<<endl;
        cout<<"1 - cachorro"<<endl;
        cout<<"2 - gato"<<endl;
    	
        cin>> choice;
        
    }while(choice < 0 || choice >= 3);
    
    return choice;
}

string menuRaca(int escolhaMenu){
	string listaRacasCao[3] = {"beagle", "boxer", "dalmata"};
	string listaRacasGato[3] = {"siames", "angora", "ragdoll"};
	
	int indice;
	if(escolhaMenu == 1){
		cout<<"\n Agora chegou a hora de escolher a raca do seu cachorrinho"<<endl;
		cout<<"1 - beagle"<<endl;
		cout<<"2 - boxer"<<endl;
		cout<<"3 - dalmata"<<endl;
		
		cin>> indice;
		indice -= 1;
		
		return listaRacasCao[indice];
	}
	if(escolhaMenu == 2){
		cout<<"\n Agora chegou a hora de escolher a raca do seu gatinho"<<endl;
		cout<<"1 - siames"<<endl;
		cout<<"2 - angora"<<endl;
		cout<<"3 - ragdoll"<<endl;
		
		cin>> indice;
		indice -= 1;
		return listaRacasGato[indice];
	}
	
}

int main()
{
    
    int escolhaMenuPrincipal = menuPrincipal();
    
    string fomeAgora;
    string nomePet;
    
    Animal bichinho;
    Cachorro cao;
    Gato cat;
    
    switch(escolhaMenuPrincipal){
    	case 1:
    		cout<<"Atencao, cuidado com seu quintal, cachorrinhos adoram cavar"<<endl;
    		
    		cout<<"\n QUAL SERA O NOME DO SEU CACHORRINHO?"<<endl;
        	cin>>nomePet;
        	
        	cao.setNome(nomePet);
        	cout<<"ENTAO O NOME DELE(A) EH: "<< cao.getNome() <<endl<<"MUITO BEM!";
        	
        	bichinho.setRaca(menuRaca(escolhaMenuPrincipal));
        	cout<<"A RACA DO SEU CACHORRINHO EH: "<< bichinho.getRaca() <<endl;
        	
        	cout<<"\n Agora vamos cavar para encontrar comida, nao deixe seu bichinho com fome";
    		break;
    		
    	case 2:
    		cout<<"Atencao, gatinhos sao animais muito independentes, talvez eles \n sumam para procurar algo de vez em quando"<<endl;
    		
    		cout<<"\n QUAL SERA O NOME DO SEU GATINHO?"<<endl;
        	cin>>nomePet;
        	
        	cat.setNome(nomePet);
        	cout<<"ENTAO O NOME DELE(A) EH: "<< cat.getNome() <<endl<<"MUITO BEM!";
        	
        	bichinho.setRaca(menuRaca(escolhaMenuPrincipal));
        	cout<<"A RACA DO SEU BICHANO EH: "<< bichinho.getRaca() <<endl;
        	
        	cout<<"\n Agora vamos procurar para encontrar comida, nao deixe seu bichinho com fome";
    		break;
    		
    	default:
    		cout<<endl;
	}
    
//   switch(escolhaMenuPrincipal){
//       case 1:
//       if(comidaEncontrada > 10 && comidaEncontrada < 20){
//       		cout<<"Infelizmente voce não encontrou nada \n Sua fome aumentou 10 pontos"<<endl;
//       		
//	   }
//   }

    return 0;
}

