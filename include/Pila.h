/**
	Nombres(s): Altamirnao Leal Jose ALfonso
	Nombres(s): Vázquez Jiménez Juan Manuel
	Descripcion:Pila donde el primer elemento agregado sera el ultimo y el ultimo sera el primero .
	
*/

#include "Nodo.h"
class Pila{
public:
	Nodo* Tope;
	Pila();
	Pila(char Dato);
	void Show();
	void Push(char Dato);
	int Altura();
	char Pop();
	bool PilaVacia();
	void VaciarPila();
};