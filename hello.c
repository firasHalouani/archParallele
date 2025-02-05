#include<stdio.h>
#include<omp.h>
int main()
{
	printf("Hello from %d \n",omp_get_thread_num());
	return 0;
}
