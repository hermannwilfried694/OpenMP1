#include <stdio.h>
#include <stdlib.h>
#include <omp.h>

int main()
{
int x, nbthreads;
#pragma omp parallel 
{
#pragma omp for lastprivate(x)
for(int i=0; i<10; i++)
x=i;
printf("La valeur de X= %d\n", x);

}
printf("La valeur dans le code sequentielle X= %d\n", x);

}
