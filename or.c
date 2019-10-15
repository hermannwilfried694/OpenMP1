#include <stdio.h>
#include <omp.h>
#define N 9
int main()
{
int i, rang;
#pragma omp parallel default(none) private(rang,i)
{
rang=omp_get_thread_num();
#pragma omp for schedule(runtime) ordered nowait
for (i=0; i<N; i++) {
#pragma omp ordered
{
printf("Rang : %d ; iteration : %d\n",rang,i);
}
}
}
return 0;
}
