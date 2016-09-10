/**
	Nombres(s): Altamirnao Leal Jose ALfonso
	Nombres(s): Vázquez Jiménez Juan Manuel
	Descripcion:crea una pila donde el ultimo en entrar es el primero de la cola
*/
#include "Pila.h"

Pila::Pila(){
	this->Tope=NULL;
}
/**
Constructor:resibe un dato con el cual crea un nodo y los apunta a Tope 
@params Dato
@reult void
*/
Pila::Pila(char Dato){
	Nodo * aux= new Nodo(Dato);
	this->Tope=aux;
}
/**
imprime los elementos de la pila empesando con el de ariba  
@params void
@reult void
*/
void Pila::Show(){
	if(PilaVacia()){
		std::cout<<"la pila esta vacia"<<std::endl;
		return;
	}
	Nodo* aux = this->Tope;
		while(aux!=NULL){
			std::cout<<aux->getDato()<<std::endl;
				aux=aux->getSig();
	}
}
/**
calula la altura de la pila  
@params void
@reult int
*/
int Pila::Altura(){
	int a=0;
	Nodo* aux = this->Tope;
	while(aux!=NULL){
		aux=aux->getSig();
		a++;
	}	
	return a;
}
/**
elimina el elemento del tope de la pila y guarda el elemento  
@params void
@result char
*/
char Pila::Pop(){
	if(PilaVacia()){
		std::cout<<"la pila esta vacia"<<std::endl;
	}else{
		char a = this->Tope->getDato();
		this->Tope=this->Tope->getSig();
		return a;
	}
}
/**
verifica si la Pila esta vacia 
@params void
@result bool
*/
bool Pila::PilaVacia()
{
	if (this->Tope == NULL)
		return true;
	return false;
}
/**
arega un elemento a la pila 
@params Dato
@reult void
*/
void Pila::Push(char Dato){
	Nodo* aux = new Nodo(Dato,this->Tope);
		this->Tope= aux;
}
/**
vacia la pila elimina todos los elementos  
@params void
@reult void
*/
void Pila::VaciarPila(){
	if(PilaVacia()){
		return;
	}
	int i = Altura();
	while(i){
		Pop();
		i--;
	}
}