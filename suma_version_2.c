//ESTA VERSIÓN USA LA CLAUSULA 'FOR'

#include <stdio.h>
#include <omp.h>
#define N 100000

int main(int argc, char argv[]){
	double empezar, terminar;
	int i,j;
	float a[N], b[N], c[N], d[N], e[N], f[N]; //ARREGLOS DE 100000

	for(i=0; i < N; i++){
		a[i] = i * 1.0;
		b[i] = i * 1.0;
	}

	empezar = omp_get_wtime();

	#pragma omp parallel for
	for(i=0; i < N; i++){
		c[i]= a[i] + b[i];
	}
	for(j=0; j < N; j++){
		d[j]= e[j] + f[j];
	}

	terminar = omp_get_wtime();

	printf("TIEMPO= %1f\n", (empezar-terminar)*-1);

	return 0;
}
