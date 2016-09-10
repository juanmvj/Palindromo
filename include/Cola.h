/**
	Nombres(s): Altamirnao Leal Jose ALfonso
	Nombres(s): Vázquez Jiménez Juan Manuel
	Descripcion:Cola donde el primer elemento agregado sera el primero y el ultimo sera el ultimo .
	
*/
#include "Pila.h"

class Cola{
public:
	Nodo* H;
	Nodo* T;
	Cola();
	Cola(char Dato);
	void Encolar(char Dato);
	char Descolar();
	void Show();
	bool ColaVacia();
	void VaciarCola();
	int Longitud();
};