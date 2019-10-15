#include <stdio.h>
#include <stdlib.h>
#include <omp.h>
int main()
{
int  nbthreads;
#pragma omp parallel private(nbthreads) 
{
nbthreads=omp_get_thread_num(); 
#pragma omp single
{
printf("single:je suis le threads numero %d\n", nbthreads);
}
printf("region parallele:je suis le threads numero %d\n", nbthreads);
#pragma omp barrier
#pragma omp master
{
printf("master:affiche %d\n", nbthreads);
}

}
}
