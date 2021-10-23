#include "../Headers/higher_free_square.h"

#define MAX_VALUE 1000
/**
 * @brief 
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
 * @brief 
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
 * @brief 
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