/******************************************************************************
PROJETO:

faça uma aplicação que contenha ao menos duas classes, com os seguintes requisitos:

*ao menos uma subclasse - temos gato e cachorro
*ao menos uma agregação - temos acao
*usar polimorfismo - a Raça
*ao menos um tipo de criação de objetos - criar bicho
*ao menos um tipo de edição de objetos - editar nome
*ao menos dois tipos de apresentação de dados de objetos - a fome atual

INTEGRANTES DO GRUPO:
Thaís Felício
Bruna Mayumi
Márcio Rogério
*******************************************************************************/
#include <iostream>
#include <locale>
#include <cstdlib>
#include <vector>

using namespace std;

#include "classe_explorar.h"
/*_____________________________________CLASS_______________________________________*/
class Animal{
    private:
    
        string nome;
        int nivelFome;
        string raca;
        Explorar explore;
    
    public:
/*+++++++++++++++++++++++++++++++++ GETTERS +++++++++++++++++++++++++++++++++++++*/   
 Explorar getExplorar(){
        return this -> explore;
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
	void setExplorar(Explorar explorei){
        this -> explore = explorei;
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

    
    Animal calculaFome(Animal pet){
    	int fomeMaxima = 100;
    	int fomeAtual = 0;
    	
    	setFome(fomeAtual);

		int condicao;

    	do{
    		if(explore.explorar() == - 10){
    			cout<<"Parabens seu pet encontrou comida \n"<<endl;
    			fomeAtual = getFome() + explore.explorar();
    			cout<<"Sua fome esta em: "<< fomeAtual <<endl;
    			setFome(fomeAtual);
    			cout<<"Procurar novamente??"<<endl;
				cout<<"Digite 1 para Sim ou 2 para Nao??"<<endl;
				cin>>condicao;
					if(condicao == 2){
						cout<<"seu pet parou de bagunçar um pouco, \n seu nivel de fome continua o mesmo"<<endl;
						cout<<"Sua fome esta em: "<< fomeAtual <<endl;
					}    			    			
				}
			if(explore.explorar() == 30){
				cout<<"Que pena, seu pet se distraiu e não encontrou comida \n"<<endl;
				fomeAtual = getFome() + explore.explorar();
				cout<<"Sua fome esta em: "<< fomeAtual <<endl;
				setFome(fomeAtual);				
    			cout<<"Procurar novamente??"<<endl;
				cout<<"Digite 1 para Sim ou 2 para Nao??"<<endl;
				cin>>condicao; 
					if(condicao == 2){
						cout<<"seu pet parou de bagunçar um pouco, \n seu nivel de fome continua o mesmo"<<endl;
						cout<<"Sua fome esta em: "<< fomeAtual <<endl;
					
					} 
				} 
				if(this->getFome() >= fomeMaxima){
		        		
		    			cout<<"---- GAME OVER ----"<<endl;
		        		cout<<"Seu pet morreu\n"<<endl;
		        		
		        	
		    }
				
			}while(this->getFome() < fomeMaxima);
			
			
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
        cout<<"1 - Cachorro"<<endl;
        cout<<"2 - Gato"<<endl;
    	
        cin>> choice;
        
    }while(choice < 0 || choice >= 3);
    
    return choice;
}

string menuRaca(int escolhaMenu){
	string listaRacasCao[3] = {"Beagle", "Boxer", "Dalmata"};
	string listaRacasGato[3] = {"Siames", "Angora", "Ragdoll"};
	
	int indice;
	if(escolhaMenu == 1){
		cout<<"\n Agora chegou a hora de escolher a raca do seu cachorrinho"<<endl;
		cout<<"1 - Beagle"<<endl;
		cout<<"2 - Boxer"<<endl;
		cout<<"3 - Dalmata"<<endl;
		
		cin>> indice;
		indice -= 1;
		
		return listaRacasCao[indice];
	}
	
	if(escolhaMenu == 2){
		cout<<"\n Agora chegou a hora de escolher a raca do seu gatinho"<<endl;
		cout<<"1 - Siames"<<endl;
		cout<<"2 - Angora"<<endl;
		cout<<"3 - Ragdoll"<<endl;
		
		cin>> indice;
		indice -= 1;
		return listaRacasGato[indice];
	}
	
}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int opcao;
    
    vector<Animal> listaDeAnimais;
	
    do{
		int escolhaMenuPrincipal = menuPrincipal();
		
    	string fomeAgora;
    	string nomePet;
    
    	Animal *bichinho = new Animal;
    	Cachorro *dog = new Cachorro;
    	Gato *cat = new Gato;
    
    
	    	switch(escolhaMenuPrincipal){
		    	case 1:
		    		cout<<"Atencao, cuidado com seu quintal, cachorrinhos adoram cavar"<<endl;
		    		
		    		cout<<"\n QUAL SERA O NOME DO SEU CACHORRINHO?"<<endl;
		        	cin>>nomePet;
		        	
		        	dog->setNome(nomePet);
		        	cout<<"ENTAO O NOME DELE(A) EH: "<< dog->getNome() <<endl<<"MUITO BEM!"<<endl;
		        	dog->comunicar();
		        	
		        	dog->setRaca(menuRaca(escolhaMenuPrincipal));
		        	cout<<"A RACA DO SEU CACHORRINHO EH: "<< dog->getRaca() <<endl;
		        	
		        	cout<<"\n Agora vamos cavar para encontrar comida, nao deixe seu bichinho com fome" <<endl;
		        	
		        	cout<< dog->calculaFome(*dog).getFome() <<endl;
		        	
		        		if(dog->getFome() >= 100){
		        			cout<<"Digite 1 para criar outro cachorro ou \n Digite 2 para criar outro gato \n ou digite 3 para sair"<<endl;
		        		cin>>opcao;
							if(opcao == 1 || opcao == 2)
							opcao = escolhaMenuPrincipal;
							
						
						else
							cout<<"Obrigado por jogar, até logo...";
						}
		        		
						
		        	listaDeAnimais.push_back(*dog);	
					
				    
		    		break;
	    		
		    	case 2:
		    		cout<<"Atencao, gatinhos sao animais muito independentes, talvez eles \n sumam para procurar algo de vez em quando"<<endl;
		    		
		    		cout<<"\n QUAL SERA O NOME DO SEU GATINHO?"<<endl;
		        	cin>>nomePet;
		        	
		        	cat->setNome(nomePet);
		        	cout<<"ENTAO O NOME DELE(A) EH: "<< cat->getNome() <<endl<<"MUITO BEM!" <<endl;
		        	cat->comunicar();
	
		        	
		        	cat->setRaca(menuRaca(escolhaMenuPrincipal));
		        	cout<<"A RACA DO SEU BICHANO EH: "<< cat->getRaca() <<endl;
		        	
		        	cout<<"\n Agora vamos procurar para encontrar comida, nao deixe seu bichinho com fome" <<endl;
		        	cout<< cat->calculaFome(*cat).getFome() <<endl;
		        	listaDeAnimais.push_back(*cat);	
		
		    		break;
		    		
		    	default:
		    		cout<<endl;
	    		
    		}
       
		}while(opcao == 1 || opcao == 2);
	
	return 0;
}

