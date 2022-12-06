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
#include <stdlib>

using namespace std;

#include "classe_cachorro.h"
#include "classe_gato.h"
#include "classe_Acoes.h"


/*_____________________________________CLASS_______________________________________*/
class Animal{
    private:
    
        string nome;
        int nivelFome;
        string Raca;
        Acoes* acao;//agregação
    
    public:
/*+++++++++++++++++++++++++++++++++ GETTERS +++++++++++++++++++++++++++++++++++++*/   
    Acoes* getAcao(){
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
/*+++++++++++++++++++++++++++++++++ SETTERS +++++++++++++++++++++++++++++++++++++*/  
    void setAcao(Acoes* Acao){
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
	virtual void comunicar(){
		
	}
    
/*+++++++++++++++++++++++++++++++++ LÓGICA +++++++++++++++++++++++++++++++++++++*/   
//    int levelUp(){
//        int levelAtual;
//        int proximoNivel = 50;
//        int nivelExp = 0;
//        
//        for(levelAtual = 1; nivelExp > proximoNivel; levelAtual++){
//            levelAtual = getLevel();
//            cout<<"Seu nível atual eh: "<< levelAtual <<endl;
//        }
//        return levelAtual;
//    }
//=============================================================================//
    void calculaFome(int fomeAtual){
        
        int fomeMaxima = 100;
        if()
        
        if(fomeAtual > fomeMaxima){
        	cout<<"---- GAME OVER ----"<<endl;
        	cout<<"Seu pet morreu"<<endl;
		}
		return fomeAtual;
    }

};

int menu(){
    int choice;
    
    do{
        cout<<"ESCOLHA SUA ACAO"<<endl;
        cout<<"1 - cavar"<<endl;
        cout<<"2 - latir"<<endl;
    	cout<<"Editar nome?"<<endl;
    	
        cin>> choice;
    }while(choice > 0 || choice <= 2);
    
    return choice;
}

int cavar(){
    
}
int main()
{
    
    string escolha = menu();
    
    string fomeAgora;
    
    
    
   switch(escolha){
       case 1:
       if(comidaEncontrada > 10 && comidaEncontrada < 20){
       		cout<<"Infelizmente voce não encontrou nada \n Sua fome aumentou 10 pontos"<<endl;
       		
	   }
   }

    return 0;
}

