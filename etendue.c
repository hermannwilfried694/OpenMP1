#include <stdio.h>
#include <omp.h>
int main()
{
int rang;
#pragma omp parallel private(rang) num_threads(3)
{
rang=omp_get_thread_num();
printf("Mon rang dans region 1 : %d \n",rang);
#pragma omp parallel private(rang) num_threads(1)
{
rang=omp_get_thread_num();
printf(" Mon rang dans region 2 : %d \n",rang);
}
}
return 0;
}
