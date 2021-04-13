#include<stdio.h>

#define N 4
#define M 5

int main()
{
    int f,c;

    double mt[N][M];
    double * p = &mt[0][0];
    for(c = 0;c<N; c++)
    {
            for(f = 0;f<M; f++)
            {
             printf("%10lf ", *(p+(c*M+f)));
            }
        printf("\n");

    }
   getchar();

}
