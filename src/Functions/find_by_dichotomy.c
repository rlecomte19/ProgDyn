#include <stdlib.h>
#include <stdio.h>

int find_by_dichotomy(int array[], int size_t, int value ){
    int valueAddress = -1;
    int leftIntervalEdge = 0;
    int rightIntervalEdge = size_t-1;
    
    while(leftIntervalEdge <= rightIntervalEdge){
        // m est ici considéré comme le milieu (entier) de l'intervale -> potentiellement réduit par l'itération
        int m = (rightIntervalEdge + leftIntervalEdge) / 2; 

        if(array[m] == value){
            return &(array[m]);
        }
        else if(array[m] < value){
            leftIntervalEdge = m+1; 
        }else{
            rightIntervalEdge = m-1;
        }
    }

    return valueAddress;
}