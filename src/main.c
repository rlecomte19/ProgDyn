#include <stdio.h>
#include <stdlib.h>
#include "./Headers/find_by_dychotomy.h"
#include "./Headers/higher_free_square.h"
#include "./Headers/knapsack_problem.h"

int main()
{
	int sizeDicoArray = 12;
	int dicoArray[12] = { 2, 12, 17, 23, 48, 56, 59, 62, 78, 91, 108, 125 };

	// Récupération de l'adresse du mot recherché
	int resultAddress = find_by_dichotomy(dicoArray, sizeDicoArray, 125);
	// Affichage du résultat et de l'adresse du nombre recherché à la base | Correspondance = réussite
	printf("\nAdresse nombre recherché : %d | Adresse via tableau : %d",resultAddress, &(dicoArray[11]));
	
	return (0);

}