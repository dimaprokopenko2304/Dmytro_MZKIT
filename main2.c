
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main()
{
int rows = 4;
int cols = 4;

srand(time(0));
double** ptrarray =  (double**)malloc(rows * sizeof(double*));  
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
double sum = 0.0;
for(int i = 0; i<rows; i++){
    if(ptrarray[i][i]>0){
    for(int j=0; j<cols; j++){
    sum+=ptrarray[i][j];    
    }
    printf("Сума %d рядка матриці з додатнім елементом %.2lf на головній діагоналі = %lf\n", i + 1, ptrarray[i][i], sum);
    }
    else{
    printf(" %d рядок не містить додатніх елементів на головній діагоналі\n", i + 1);  
    }
} 
for(int i = 0; i<rows; i++){
free(ptrarray[i]);
}
free(ptrarray);
    

    return 0;
}
