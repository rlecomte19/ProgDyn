#include <stdio.h>
#include <stdlib.h>

#define MAX_ELEMENTS 100

typedef struct{
    int value;
    float weight;
} Object;

typedef struct{
    Object objectArray[MAX_ELEMENTS];
    int index;
    float listValue;
} ObjectList;

typedef struct{
    ObjectList *inBag;
    float maxWeight;
} Bag;

void initObject(Object *o, int o_value, float o_weight);
void initObjectList(ObjectList *o_array);
void initBag(Bag *b, float b_maxWeight);
void pushToList(ObjectList *l, Object o);
void fillBag(ObjectList l, Bag *b);
void sortArray(ObjectList *l);
void printObject(Object object);
void printfObjectList(ObjectList *objectlist);
void printBag(Bag *bag);
