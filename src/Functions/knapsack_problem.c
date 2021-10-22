#include "../Headers/knapsack_problem.h"
#include <stdlib.h>
#include <stdio.h>

void initObject(Object *o, int o_value, float o_weight){
    o->value = o_value;
    o->weight = o_weight;
}
void initObjectList(ObjectList *o_array){
    o_array->index = 0;
    o_array->listValue = 0.0f;
}
void initBag(Bag *b, float b_maxWeight){
    b->maxWeight = b_maxWeight;
    b->inBag = malloc(sizeof(ObjectList));
    initObjectList(b->inBag);
}
void pushToList(ObjectList *l, Object o){
    l->objectArray[l->index] = o;
    l->index++;
}
void fillBag(ObjectList l, Bag *b){
    int isFull = 0;
    int i = 0;

    while(!isFull){
    float valDifference = 10.0f - (l.objectArray[i].value);
        if(valDifference < 0){
            isFull = 1;
        }
        else if(valDifference == 0){
            pushToList(b->inBag, l.objectArray[i]);
            isFull = 1;
        }else{
            pushToList(b->inBag, l.objectArray[i]);
        }
    }
}