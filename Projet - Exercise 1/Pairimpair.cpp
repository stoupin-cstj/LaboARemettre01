// But: Le programme lit un entier et il détermine si c'est un entier pair ou impair
// Auteur : Samuel Toupin
// Date : 2020/09/13

#include <iostream>



int  main()

{
	setlocale(LC_ALL, "");


	int nombre1;

	// Demander a l'utilisateur de rentrer un nombre

	std::cout << " Veuillez entrer un nombre entier :";
	std::cin >> nombre1;

	// Nombre si pair 
	if (nombre1%2 == 0)
		{		std::cout << nombre1 << " est un nombre pair ";
		}
	
	// Nombre si impair
		else 
		{
			std::cout << nombre1 << " est un nombre impair";

		}


/*


nombre1             résultat
5                   5 est un nombre impair 
10                  10 est un nombre pair
12                  12 est un nombre pair
13                  13 est un nombre impair





*/




 























}