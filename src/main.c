#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include "./Headers/find_by_dychotomy.h"
#include "./Headers/higher_free_square.h"
#include "./Headers/knapsack_problem.h"

int main()
{
	// Déclarations algorithme par dicothomie
	// int sizeDicoArray = 12;
	// int dicoArray[12] = { 2, 12, 17, 23, 48, 56, 59, 62, 78, 91, 108, 125 };
	
	// Déclarations problème du sac à dos
	Object *o1 = malloc(sizeof(Object)); 				initObject(o1, 7, 6.0f); 
	Object *o2 = malloc(sizeof(Object)); 			 	initObject(o2, 5, 5.0f);
	Object *o3 = malloc(sizeof(Object)); 			 	initObject(o3, 5, 5.0f);
	ObjectList *objects = malloc(sizeof(ObjectList)); 	initObjectList(objects);
	Bag *bag = malloc(sizeof(Bag));						initBag(bag, 10.0f);

	pushToList(objects, *o1);
	pushToList(objects, *o2);
	pushToList(objects, *o3);
	sortArray(objects);
	fillBag(*objects, bag);
	printBag(bag);
	// Récupération de l'adresse du mot recherché
	// int resultAddress = find_by_dichotomy(dicoArray, sizeDicoArray, 125);
	// Affichage du résultat et de l'adresse du nombre recherché à la base | Correspondance = réussite
	// printf("\nAdresse nombre recherché : %d | Adresse via tableau : %d",resultAddress, &(dicoArray[11]));
	
	return (0);

}