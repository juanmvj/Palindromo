/**
	
	Nombres(s): Altamirnao Leal Jose ALfonso
	Nombres(s): Vázquez Jiménez Juan Manuel
	Descripcion:metodos de la clase nodo que permite mober e interactuar con ellos 
	
*/
#include <iostream>

class Nodo
{
private:
	char Dato;
	Nodo* Sig;
public:
	Nodo(char Dato, Nodo* Sig);
	Nodo(char Dato);
	void setDato(char Dato);
	void setSig(Nodo* Sig);
	char getDato();
	Nodo* getSig();
	//~Nodo();
};