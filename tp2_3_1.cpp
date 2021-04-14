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

    int * pFila, * pVec;
    pFila = (int *)malloc(sizeof(int) * filas);
    pVec = (int *)malloc(sizeof(int) * filas);

    int columnas = ((rand() % maxcol)+mincol);
    int matriz[filas][columnas],contPares;


    for (int i = 0; i < filas; i++)
    {
       contPares=0;
        for (int j = 0; j < columnas; j++)
        {
            
            *(pFila + i * filas + j) = ((rand() % max)+min);
            printf("%6d",*(pFila + i * filas + j));
            if((*(pFila + i * filas + j) % 2) == 0)
            {
                contPares++;
            }
        }
        printf("\t---->La fila %d tiene %d numeros Pares\n",i+1,contPares);

        *(pVec+i) = contPares;
        
    }
    free(pFila);
    printf("\nVector con las cantidades de numeros pares: ");
    for (int i = 0; i < filas; i++)
    {
        printf("%4d",*(pVec+i));
    }
    

    free(pVec);
    getchar();


}