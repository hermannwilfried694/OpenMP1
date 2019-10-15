#include <stdio.h>
#include <stdlib.h>
#include <omp.h>
#include <time.h>

float lire()
{
float* tab;
float max; 
float temps;
clock_t t1, t2;
int i,n=3, j;
t1 = clock();
tab = (float*)malloc(n*sizeof(float));
for(i=0; i<n; i++)
{
printf("Entrez un element du tableau---------- \n");
scanf("%f", &tab[i]);
}
max=tab[0];
//printf("affiche de la valeur  %f\n", max);
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
printf("le temps d'execution est de temps= %f\n", temps);
}


int main()
{
lire();
return 0;
}
