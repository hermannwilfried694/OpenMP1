#include <stdio.h>
#include <omp.h>
#include <time.h>
#define SIZE 5
int main () {
clock_t t1, t2;
float temps;
double sum , a[ SIZE ], b[ SIZE ];
// Initialization
sum = 0.;
t1 = clock();
for (size_t i = 0; i < SIZE ; i ++) {
a[i] = i * 0.5;
b[i] = i * 2.0;
}
// Computation
#pragma omp for 
for (size_t i = 0; i < SIZE ; i ++) {
sum = sum + a[i ]* b[i ];
printf("la somme est sum= %g\n", sum);
}
printf (" sum = %g\n" , sum );
t2 = clock();
temps = (float)(t2-t1);
printf("le temps est %f\n", temps);
return 0;
}
