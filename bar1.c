#include <stdio.h>
#include <stdlib.h>
#include <omp.h>
int main()
{
int i, j, nbthreads;
#pragma omp parallel private(nbthreads)
{
nbthreads=omp_get_thread_num(); 
#pragma omp single
{
i=5+ nbthreads;
j=5+ nbthreads;
printf("single:je suis le threads numero i=%d\n", nbthreads);

}
printf("paralle:je suis le threads numero j=%d\n", nbthreads);
#pragma omp master
{
printf("master:affiche %d\n", nbthreads);
}
}
}
