#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <omp.h>


float lire()
{

float* tab;
float max; 
int i,n=3, j;
float temps;
clock_t t1, t2;
t1 = clock();
tab = (float*)malloc(n*sizeof(float));

for(i=0; i<n; i++)
{
printf("Entrez un element du tableau---------- \n");
scanf("%f", &tab[i]);
}
max=tab[0];
//printf("affiche de la valeur  %f\n", max);
#pragma omp for
for(i=1; i<n; i++)
{
//printf("affiche de la valeur  %f\n", tab[i]);

if(max<tab[i])
{
max=tab[i];
}
}
printf("la valeur de max=  %f\n", max);
t2 = clock();
temps = (float)(t2-t1);
printf("le temps d'execution est de temps= %f\n",   temps);
}


int main()
{
//int t=0;
//t=clock();
lire();
//printf("le temps d'exection est de t= %d\n", t);
return 0;
}
