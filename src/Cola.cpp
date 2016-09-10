/**
	Nombres(s): Altamirnao Leal Jose ALfonso
	Nombres(s): Vázquez Jiménez Juan Manuel
	
*/
#include "Cola.h"
/**
creamos una Cola vacia.
@params void
@result void
*/
Cola::Cola(){
	this->H=NULL;
	this->T=NULL;
}
/**
Constructor:resibe un dato con el cual crea un nodo y los apunta a T y H 
@params Dato
@reult void
*/
Cola::Cola(char Dato){
	Nodo * aux= new Nodo(Dato);
	this->H=aux;
	this->T=aux;
}
/**
imprime los elementos de la Cola  
@params void
@reult void
*/
void Cola::Show(){
	if(ColaVacia()){
		std::cout<<"la pila esta vacia"<<std::endl;
		return;
	}
	Nodo* aux = this->H;
		while(aux!=NULL){
			std::cout<<aux->getDato()<<" ";
				aux=aux->getSig();
	}
	std::cout<<""<<std::endl;
}
/**
verifica si la Pila esta vacia 
@params void
@reult bool
*/
bool Cola::ColaVacia(){
	if (this->H == NULL)
		return true;
	return false;
}
/**
arega un elemento al final de la cola
@params Dato
@reult void
*/
void Cola::Encolar(char Dato){
	Nodo* aux = new Nodo(Dato,this->H);
	this->H= aux;
}
/**
Descola el primer elemnto y guarda el elemento  
@params void
@reult char
*/
char Cola::Descolar(){
	if(ColaVacia()){
		std::cout<<"la pila esta vacia"<<std::endl;
	}else{
		int i=Longitud();
		if(i==1){
			char a = this->T->getDato();
			VaciarCola();
			return a;
		}if(i>1){
			char a = this->T->getDato();
			i=i-2;
			Nodo* aux = this->H;
			while(i){
				aux=aux->getSig();
				i--;
			}
			this->T=aux;
			this->T->setSig(NULL);
			return a;
		}
	}
}
/**
calula la longuitud de la cola 
@params void
@reult int
*/
int Cola::Longitud(){
	int a=0;
	Nodo* aux = this->H;
	while(aux!=NULL){
		aux=aux->getSig();
		a++;
	}	
	return a;
}
/**
Vacia la cola 
@params void
@reult void
*/
void Cola::VaciarCola(){
	this->H=NULL;
	this->T=NULL;
}