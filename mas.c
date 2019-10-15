#include <stdio.h>
#include <stdlib.h>
#include <omp.h>

int main()
{
int i, nbthread;
#pragma omp parallel private(i, nbthread)
{
nbthread = omp_get_thread_num();
i=2 + nbthread;
#pragma omp master
{
i=10; 
}
printf("thread number %d avec i=%d\n", nbthread, i);
}
return 0;
}

