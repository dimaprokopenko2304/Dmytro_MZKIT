
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main() 
{
int rows = 4;
int cols = 4;

srand(time(0));
double** ptrarray =  (double**)malloc(rows * sizeof(double*));  // створюю покажчик//
for(int i=0; i< rows; i++){
ptrarray[i] = (double*)malloc(cols * sizeof(double));
} 
for(int i = 0; i<rows; i++){
    for(int j = 0; j<cols; j++){
    ptrarray[i][j] = (rand() % 21 - 10) / (double)(rand() % 21 + 10);
    printf("%.2f  ", ptrarray[i][j]);
    }
printf("\n");    
}
} 
for(int i = 0; i<rows; i++){
free(ptrarray[i]);
}
free(ptrarray);
    

    return 0;
}
