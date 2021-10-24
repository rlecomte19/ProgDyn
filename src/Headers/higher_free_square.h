
#include <stdlib.h>
#include <stdio.h>
#include <time.h> 


void fillMatrix(int width, int height, char matrix[width][height]);
void randomFillMatrix(int width, int height, char matrix[width][height]);
void printMatrix(int width, int height, char matrix[width][height]);
/* /!\ Plus Grand Carré Blanc /!\ */
int pgcb(int width, int height, int x, int y, char matrix[width][height]);
int minPGCB(int width, int height, int x, int y, char matrix[width][height]);
void pgcbMatrix(int width, int height, char matrix[width][height], char tofill[width][height]);