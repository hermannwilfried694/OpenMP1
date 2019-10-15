int main()
{
int i, rang;

#pragma omp parallel private(rang) num_threads(2)
{
rang=omp_get_thread_num();
#pragma omp sections nowait
{
#pragma omp section
{
printf("Tâche numéro %d : init. champ en X\n",rang);
}
#pragma omp section
{
printf("tache numero %d: init. champ en Y\n", rang);
}
}
}
return 0;
}

