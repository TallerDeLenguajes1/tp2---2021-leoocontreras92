#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

const int cantPc=6;

struct compu
{
    int velocidad;
    int anio;
    int cantidad;
    char *tipo_cpu;
};

typedef struct compu compu;


void pc1(compu **pPC);
void cargaPc(compu **pPC,char tipo[6][10]);
void listaPc(compu **pPC);
void pcVieja(compu **pPC);
void pcVelocidad(compu **pPC);

int main()
{
    srand(NULL);
    char tipos[6][10]={"Intel","AMD","Celeron","Athlon","Core","Pentium"};

        compu *pPC = (compu *)malloc(sizeof(compu)*cantPc);



        for (int i = 0; i < cantPc; i++)
        {
            pPC[i].velocidad = ((rand() % 2) + 1);
            pPC[i].anio = ((rand() % 17) + 2000);
            pPC[i].cantidad = ((rand() % 3) + 1);
            pPC[i].tipo_cpu=tipos[i];

        }

        printf("PCs\tProcesador\tVelocidad\tAnio\t\tantidad de nucleos\n");

        for (int i = 0; i < cantPc; i++)
        {
            printf("PC n%d:\t",i+1);
            printf("%s\t\t",pPC[i].tipo_cpu);
            printf("%d Ghz\t\t",pPC[i].velocidad);
            printf("%d\t\t",pPC[i].anio);
            printf("%d nucleos\t",pPC[i].cantidad);
            printf("\n");
        }


        pc1(&pPC);
        cargaPc(&pPC,tipos);
        listaPc(&pPC);
        printf("\n");
        pcVieja(&pPC);
        printf("\n");
        pcVelocidad(&pPC);



    free(pPC);

    getchar();

    return(0);
}


void pc1(compu **pPC)
{
    int i;
    compu *aux = *pPC;

        printf("\nIngrese el numero de PC que desea ver: ");
        scanf("%d",&i);
        i= i-1;
        fflush(stdin);

        if((i>=0) && (i<=cantPc-1))
        {
            printf("PC n%d:\t",i+1);
            printf("%s\t\t",aux[i].tipo_cpu);
            printf("%d Ghz\t\t",aux[i].velocidad);
            printf("%d\t\t",aux[i].anio);
            printf("%d nucleos\t",aux[i].cantidad);
            printf("\n");
        }
        else
        {
            printf("\nNumero de PC inexistente");
        }
    
}

void cargaPc(compu **pPC,char tipo[6][10])
{

    compu *aux = *pPC;


        for (int i = 0; i < cantPc; i++)
        {
            aux[i].velocidad = ((rand() % 2) + 1);
            aux[i].anio = ((rand() % 17) + 2000);
            aux[i].cantidad = ((rand() % 3) + 1);
            aux[i].tipo_cpu=tipo[i];

        }

}

void listaPc(compu **pPC)
{

    compu *aux = *pPC;

        printf("\nListado de PCs a partir de una funcion por referencia\n");

        for (int i = 0; i < cantPc; i++)
        {
            printf("PC n%d:\t",i+1);
            printf("%s\t\t",aux[i].tipo_cpu);
            printf("%d Ghz\t\t",aux[i].velocidad);
            printf("%d\t\t",aux[i].anio);
            printf("%d nucleos\t",aux[i].cantidad);
            printf("\n");
        }

}
void pcVieja(compu **pPC)
{
    int i,c=0;
        compu *aux = *pPC;
        for ( i = 0; i < cantPc; i++)
        {
            if(aux[i].anio<aux[i+1].anio){
                c=i;
            }
        }

        printf("PC mas vieja:\t");
        printf("%s\t\t",aux[c].tipo_cpu);
        printf("%d Ghz\t\t",aux[c].velocidad);
        printf("%d\t\t",aux[c].anio);
        printf("%d nucleos\t",aux[c].cantidad);
        printf("\n");
        
}
void pcVelocidad(compu **pPC)
{
    int i,c=0;
        compu *aux = *pPC;
        int vel=aux[i].velocidad;
        for ( i = 0; i < cantPc; i++)
        {
            if(vel < aux[i].velocidad)
            {
            c=i;
            vel=aux[i].velocidad;
            }
            

        }

        printf("PC con mayor velocidad:\t");
        printf("%s\t\t",aux[c].tipo_cpu);
        printf("%d Ghz\t\t",aux[c].velocidad);
        printf("%d\t\t",aux[c].anio);
        printf("%d nucleos\t",aux[c].cantidad);
        printf("\n");
        
}
