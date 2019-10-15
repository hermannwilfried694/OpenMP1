#include <stdio.h>
#include <stdlib.h>
#include <omp.h>

int main()
{
int x=4, y=3, nbthreads;
#pragma omp parallel default(none) private(nbthreads, x, y)
{
//printf("affiche de valeur: %d\n", x);
 nbthreads = omp_get_thread_num();
 x = x + nbthreads;
 y = y + nbthreads;
 printf("affiche de la valeur x= %d et y= %d\n", x, y);
}

printf("Dans la region sequentielle x= %d et y=  %d\n", x, y);
} 

