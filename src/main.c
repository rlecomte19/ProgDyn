#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include "./Headers/find_by_dychotomy.h"
#include "./Headers/higher_free_square.h"
#include "./Headers/knapsack_problem.h"

int main()
{
    printf("\n				ALGORITHME DE RECHERCHE DICOTHOMIQUE");
	int sizeDicoArray = 12;
	int dicoArray[12] = { 2, 12, 17, 23, 48, 56, 59, 62, 78, 91, 108, 125 };
	// Récupération de l'adresse du mot recherché
	int resultAddress = find_by_dichotomy(dicoArray, sizeDicoArray, 125);
	// Affichage du résultat et de l'adresse du nombre recherché à la base | Correspondance = réussite
	printf("\n\nAdresse nombre recherché : %d | Nombre recherché via tableau : %d",resultAddress, dicoArray[resultAddress]);


	printf("\n\n\n");
	printf("\n 				PROBLEME DU SAC A DOS");
	Object *o1 = malloc(sizeof(Object)); 				initObject(o1, 7, 6.0f); 
	Object *o2 = malloc(sizeof(Object)); 			 	initObject(o2, 5, 5.0f);
	Object *o3 = malloc(sizeof(Object)); 			 	initObject(o3, 5, 5.0f);
	ObjectList *objects = malloc(sizeof(ObjectList)); 	initObjectList(objects);
	Bag *bag = malloc(sizeof(Bag));						initBag(bag, 10.0f);
	// Ajout des objets la liste des objets
	pushToList(objects, *o2);
	pushToList(objects, *o1);
	pushToList(objects, *o3);
	// Tri décroissant de la liste des objets (par couple valeur/poids)
	sortArray(objects);
	// Remplissage du sac grâce à la liste
	fillBag(*objects, bag);
	printBag(bag);

	printf("\n\n\n");

	// DECOMMENTER LA SUITE UNE FOIS LES PROBLÈMES RESOLUS !!!!

	// int width = 5;
	// int height = 6;

	// char testMatrix[width][height];
	// char calculatedSquares[width][height];

	// fillMatrix(width, height, testMatrix);
	// randomFillMatrix(width, height, testMatrix);
	// printMatrix(width, height, testMatrix);
	// pgcbMatrix(width, height, testMatrix, calculatedSquares);
	
	return 0;

}