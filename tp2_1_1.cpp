#include<conio.h>
#include<stdio.h>

#define N 4
#define M 5

int main()
{
    int f,c;
    double mt[N][M];
    for(c = 0;c<N; c++)
    {
            for(f = 0;f<M; f++)
            {
               printf("%10lf ", mt[c][f]);
            }
        printf("\n");
    }
   getchar();

}
