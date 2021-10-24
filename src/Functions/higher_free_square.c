#include "../Headers/higher_free_square.h"

#define MAX_VALUE 1000
/**
 * @brief Initialise la matrice principale
 * 
 * @param width
 * @param height
 * @param matrix
 */

void fillMatrix(int width, int height, char matrix[width][height]){
    for (int i=0;i<width;i++){
        for(int j=0;j<height;j++){
            matrix[width][height] = '0';
        }
    }
}

/**
 * @brief Remplit la matrice principale avec un nombre aléatoire de valeurs aléatoires
 * 
 * @param width
 * @param height
 * @param matrix 
 */
void randomFillMatrix(int width, int height, char matrix[width][height]){
    srand(time(NULL));
    int randI = 0;
    int randJ = 0;
    int randValue = 0;
    int randNbValues = rand() % (width*height-1);

    for (int i=0; i<=randNbValues; i++){
        randI = rand() % (width - 1);
        randJ = rand() % (height - 1);

        matrix[randI][randJ] = '1';
    }
}

/**
 * @brief Calcul du minimum prévu dans la relation de récurrence fournie dans le sujet du tp
 * 
 * @param x 
 * @param y 
 * @return int 
 */
int minPGCB(int width, int height, int x, int y, char matrix[width][height]){
    int min = 10000000;
    int lastX = x-1;
    int lastY = y-1;

    // Eviter le dépassement d'indices
    if(lastX <= 0){
        lastX = 0;
    }
    if(lastY <= 0){
        lastY = 0;
    }
    // Calcul du minimum des PGCB dans la relation de récurrence
    if(min > pgcb(width, height, x, y, matrix)){
        min = pgcb(width, height, x,y, matrix);
    }else if(min > pgcb(width, height, x-1,y, matrix)){
        min = pgcb(width, height, x-1,y, matrix);
    }else if(min > pgcb(width, height, x,y-1, matrix)){
        min = pgcb(width, height, x,y-1, matrix);
    }
    
    return min;
}

/**
 * @brief Renvoie une valeur selon la relation de récurrence définie dans le sujet du tp
 * 
 * @param width 
 * @param height 
 * @param x 
 * @param y 
 * @param matrix 
 * @return int 
 */
int pgcb(int width, int height, int x, int y, char matrix[width][height]){
    int currentPgcb = -1;

    if(matrix[x][y] == '0'){
        currentPgcb = 0;
    }
    else if(matrix[x][y] == '1'){
        if(!x || !y){
            currentPgcb = 1;
        }
        else if(x || y){
            minPGCB(width,height,x,y,matrix);
        }
    }

    return currentPgcb;
}

/**
 * @brief Remplit une matrice avec les valeurs du plus grand carré blanc définit
 * 
 * @param width 
 * @param height 
 * @param matrix 
 * 
 */
void pgcbMatrix(int width, int height, char matrix[width][height], char tofill[width][height]){
    for (int i=0;i<width;i++){
        for(int j=0;j<height;j++){
            tofill[width][height] = pgcb(width, height, i, j, matrix);
        }
    }
}
/**
 * @brief Affichage d'une matrice de deux dimensions
 * 
 * @param width 
 * @param height 
 * @param matrix 
 */
void printMatrix(int width, int height, char matrix[width][height]){
    printf("\n                                                  CARRE C \n");
    for (int i=0;i<width;i++){
        for(int j=0;j<height;j++){
            if(matrix[i][j] == '1'){
                printf("[%c]", '*');
            }
            else{
                printf("[%c]", ' ');
            }
        }
        printf("\n");
    }
    printf("==================  \n");
}