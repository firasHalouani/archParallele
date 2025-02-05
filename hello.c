#include<stdio.h>
#include<omp.h>
int main()
{
	printf("Nbr threads = %d\n",omp_get_num_threads());
	#pragma omp parallel
	printf("Hello from %d \n",omp_get_thread_num());
	return 0;
}
