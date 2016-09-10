/**
	Nombres(s): Altamirnao Leal Jose ALfonso
	Nombres(s): Vázquez Jiménez Juan Manuel
	
*/
#include "Nodo.h"
/**
Constructor de un nodo con un dato y el apuntador al siguiente nodo
@params Dato, *Sig
*/
Nodo::Nodo(char Dato , Nodo* Sig)
{
	this->Dato = Dato;
	this->Sig = Sig;
}
/**
Constructor de un nodo con un dato con el siguiente apuntando a NULL
@params Dato
*/
Nodo::Nodo(char Dato)
{
	this->Dato = Dato;
	this->Sig = NULL;
}
/**
asignamos un dato a un nodo
@params Dato
@result void
*/
void Nodo::setDato(char Dato)
{
	this->Dato = Dato;
}
/**
asignamos el elemento al que va a apuntar el nodo
@params *sig
@result void
*/
void Nodo::setSig(Nodo* Sig)
{
	this->Sig = Sig;
}
/**
debolvemos  el dato del nodo
@params void
@result char
*/
char Nodo::getDato()
{
	return this->Dato;
}
/**
debolbemos el elemento siguiente del nodo
@params ---
@result Nodo
*/
Nodo* Nodo::getSig()
{
	return this->Sig;
}