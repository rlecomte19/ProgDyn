#include "../Headers/knapsack_problem.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * @brief 
 * 
 * @param o 
 * @param o_value 
 * @param o_weight 
 */
void initObject(Object *o, int o_value, float o_weight){
    o->value = o_value;
    o->weight = o_weight;
}

/**
 * @brief 
 * 
 * @param o_array 
 */
void initObjectList(ObjectList *o_array){
    o_array->index = 0;
    o_array->listValue = 0.0f;
}

/**
 * @brief 
 * 
 * @param b 
 * @param b_maxWeight 
 */
void initBag(Bag *b, float b_maxWeight){
    b->maxWeight = b_maxWeight;
    b->inBag = malloc(sizeof(ObjectList));
    initObjectList(b->inBag);
}

/**
 * @brief 
 * 
 * @param l 
 * @param o 
 */

//pushToList(b->inBag, l.objectArray[i]);

void pushToList(ObjectList *l, Object o){
    l->objectArray[l->index] = o;
    l->index++;
    l->listValue += o.value;
}

/**
 * @brief 
 * 
 * @param l 
 * @param b 
 */
void fillBag(ObjectList l, Bag *b){
    int isFull = 0;
    int i = 0;

    while(!isFull){
    float valDifference = b->maxWeight - (l.objectArray[i].value);
        if(valDifference < 0){
            isFull = 1;
        }
        else if(valDifference == 0){
            pushToList(b->inBag, l.objectArray[i]);
            isFull = 1;
        }else{
            pushToList(b->inBag, l.objectArray[i]);
            b->maxWeight -= l.objectArray[i].value;
        }
    }
}

/**
 * @brief Fonction triant par ordre décroissant les objets en fonction du résultat 
 * 
 * @param listObjects 
 */
void sortArray(ObjectList *listObjects){
    
    int lenght = listObjects->index;
    int i = 0;
    int j = 0;
    // Prendra la valeur du couple c/w courant dans les boucles de tri
    float iResult = 0;
    float jResult = 0;
    // On crée un objet temporaire pour le tri
    Object *tmp = malloc(sizeof(Object));
    

    for(i=0; i<lenght ; i++)
    {

        for(j=i; j<lenght; j++){
            iResult = (listObjects->objectArray[i]).value / (listObjects->objectArray[i].weight);
            jResult = (listObjects->objectArray[j]).value / (listObjects->objectArray[j].weight);
            if(jResult>iResult){
                *tmp = listObjects->objectArray[i];
                listObjects->objectArray[i] = listObjects->objectArray[j];
                listObjects->objectArray[j] = *tmp;
            }
        }
    }
}

/**
 * @brief 
 * 
 * @param object 
 */
void printObject(Object object){
    printf("[VAL:%d ; WEIGHT:%.1f]\n", object.value, object.weight);
}
void printObjectList(ObjectList *objectlist){
    for(int i=0; i<objectlist->index;i++){
        printf("\nObject %d : ", i+1);
        printObject(objectlist->objectArray[i]);   
    }
}

/**
 * @brief 
 * 
 * @param bag 
 */
void printBag(Bag *bag){
    printf("\n      ###### CONTENU DU SAC ######"); 
    printObjectList(bag->inBag);
}