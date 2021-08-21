//ESTA VERSIÓN USA LA CLAUSULA 'SECTIONS'

#include <stdio.h>
#include <omp.h>
#define N 100000

int main(int argc, char argv[]){
	double empezar, terminar;
	int i,j;
	float a[N], b[N], c[N], d[N], e[N], f[N];

	for(i=0; i < N; i++){
		a[i] = i * 1.0;
		b[i] = i * 1.0;
	}

	#pragma omp parallel sections
	{
		empezar = omp_get_wtime();

		#pragma omp section
			for(i=0; i < N; i++){
				c[i]= a[i] + b[i];
			}

		#pragma omp section
			for(j=0; j < N; j++){
				d[j]= e[j] + f[j];
			}
	}

	terminar = omp_get_wtime();

	printf("TIEMPO= %1f\n", (empezar-terminar)*-1);

	return 0;
}
