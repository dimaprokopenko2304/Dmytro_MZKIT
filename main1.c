
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main()
{
int size = 10;
srand(time(0));
int* ptrarray =  (int *)malloc(size * sizeof(int));  
for(int i=0; i< size; i++){
   ptrarray[i] = rand() % 21 - 10;
} 
printf("array address = %p \n", ptrarray );
for(int i = 0; i<size; i++){
    printf("ptrarray[%d] = %d, %p \n", i, ptrarray[i], &ptrarray[i]);
}
int count = 0;
for(int i =0; i<size; i++){
    if(ptrarray[i]<=0 && abs(ptrarray[i])>i){
    count++;    
    }    
}
printf("Кількість чисел, що відповідають умові: %d", count);
    return 0;
}
