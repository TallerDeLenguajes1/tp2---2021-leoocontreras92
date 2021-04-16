#include<stdio.h>
#include<stdlib.h>
#include<time.h>
const int min = 100;
const int max = 899;
const int mincol = 5;
const int maxcol = 10;
const int filas = 15;
int main()
{   
    srand(time(NULL));
    int ** pMatriz;
    int * pVec;
    pVec = (int *)malloc(sizeof(int) * filas);
    int columnas;
    int contPares;
    pMatriz = (int **)malloc(sizeof(int*) * filas);
    for (int i = 0; i < filas; i++) 
    {
       contPares=0;
       int columnas = ((rand() % maxcol)+mincol+1);
       pMatriz[i] = (int *)malloc(sizeof(int) * columnas);
       pMatriz[i][0]=columnas;
      
        for (int j = 0; j < columnas; j++)
        {
            pMatriz[i][j] = ((rand() % max)+min);
            printf("%6d",pMatriz[i][j]);
            if((pMatriz[i][j] % 2) == 0)
            {
                contPares++;
            }
        }
        printf("\t---->La fila %d tiene %d numeros Pares\n",i+1,contPares);
        *(pVec+i) = contPares;
    }
    printf("\nVector con las cantidades de numeros pares: ");

    for (int i = 0; i < filas; i++)
    {
        printf("%4d",*(pVec+i));
    }
    free(*pMatriz);
    free(pVec);
    getchar();
    return 0;
}