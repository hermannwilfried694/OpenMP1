//OpenMP header
#include <omp.h>
#include <stdio.h> 
#include <stdlib.h>

int main(int argc, char* argv[])
{
   int nthreads=10, tid;
   
   //begin of parallel region
   #pragma omp parallel firstprivate(nthreads)
   {
      //getting thread number
      tid = omp_get_thread_num();
      printf("Welcome to GFG from thread = %d\n" , tid);
      if(tid == 0){
      //only master thread does his
      nthreads = omp_get_num_threads();
      printf("Number of threads = %d\n" , nthreads);
      }
   }
   printf("Number of threads = %d\n" , nthreads);
}

