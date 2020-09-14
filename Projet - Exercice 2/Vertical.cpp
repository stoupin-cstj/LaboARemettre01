// But: Écrire un programme qui prends un nombre cinq chiffre, qui les met en verticale.
// Auteur : Samuel Toupin
// Date : 2020/09/13


#include <iostream>

int main()

{

	setlocale(LC_ALL, "");

	int nombre1;
	std::cout << " Entrez un nombre à 5 chiffre : ";
	
	std::cin >> nombre1;
	// Chiffre max 99 999
	if (nombre1 < 99999)
	// Chiffre min 10 000
	if	(nombre1 > 10000)
	{
		std::cout << "  ";
	}
	// Si le chiffre ne contient pas 5 chiffres, message.
	else
	{
		std::cout << "Ce nombre ne contient pas 5 chiffres.";
	}

     
	 
	/*
	nombre              résultat
	12345              1
	                   2
					   3
					   4
					   5
    
	581               Ce nombre ne contient pas 5 chiffres.

	
	
	
	
	
	
	
	
	
	
	*/
	











}