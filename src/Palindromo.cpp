/**
	Nombres(s): Altamirnao Leal Jose ALfonso
	Nombres(s): Vázquez Jiménez Juan Manuel
	Descripcion: metodos para hacer que al ingresar una palabra o frase,
	se determine si esta es palindromo o no.
*/
#include "Palindromo.h"
#include <iostream>
#include <stdio.h>
#include <string.h>

/**
Constructor: se ingresa la frase, quita los espacios,
convierte a maninusculas, manda llamar a MuevePalindromoC,
MuevePalindromoP y Compara
@params void
@result void
*/
Palindromo::Palindromo(){
	
	Pila p = Pila();
	char Cadena[100];
	std::cout<<"Ingresa una Frase: ";
    std::cin.getline(Cadena,30);//optienes la cadena completa del arreglo
    char NuevaCadena[100];
    int j=0;
    int longi=0;
    for(int  i = 0; Cadena[i] != 0;++i){
        if(Cadena[i] != 32){//32 significa espacio en codigo ascii!!    
        	if(Cadena[i]<96){
        		Cadena[i]=Cadena[i]+32;
        	}
        	j++;
        	NuevaCadena[j]=Cadena[i];
        	longi++;
        }
    }
	Cola c = Cola(NuevaCadena[1]);
	p=MuevePalindromoP(p,longi,NuevaCadena);
	c=MuevePalindromoC(c,longi,NuevaCadena);
	Compara(c,p);
}
/**
acomoda la NuevaCadena en la pila
@params c, longi, NuevaCadena[100]
@result Cola
*/
Cola Palindromo::MuevePalindromoC(Cola c,int longi,char NuevaCadena[100]){
	int i=2;
	longi--;	
	while(longi){
		c.Encolar(NuevaCadena[i]);
		i++;
		longi--;
	}
	c.Show();
	std::cout<<" "<<std::endl;
	return c;
}
/**
acomoda la NuevaCadena en la cola
@params p, longi, NuevaCadena[100]
@result Pila
*/
Pila Palindromo::MuevePalindromoP(Pila p,int longi,char NuevaCadena[100]){
	int j=1;
	while(longi){
		p.Push(NuevaCadena[j]);
		j++;
		longi--;
	}
	p.Show();
	std::cout<<" "<<std::endl;
	return p;

}
/**
compara si es o no un palindromo
@params c, p 
@result void
*/
void Palindromo::Compara(Cola c,Pila p){
	int a=c.Longitud();
		while(a){
		if(c.Descolar()!=p.Pop()){
		std::cout<<"No es palindromo"<<std::endl;
		return;	
		}
		a--;
	}
	std::cout<<"es palindromo"<<std::endl;
}


