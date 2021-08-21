#include <stdio.h>
#include <omp.h>
#define N 500

int main(int argc, char *argv[]){
	int i,j,k,NRA=N, NCB=N, NCA=N, numero=1;
	int a[N][N]; //ARREGLO DE 500 X 500
	int b[N][N]; //ARREGLO DE 500 X 500
	int c[N][N]; //ARREGLO DE 500 X 500
	double empezar, terminar;

	for(int x=0; x<N; x++){
		for(int y=0; y<N; y++){
			a[x][y]= numero;
			numero++;
		}
	}

	for(int x=0; x<N; x++){
		for(int y=0; y<N; y++){
			b[x][y] = numero;
			numero--;
		}
	}

	empezar= omp_get_wtime(); //Inicio del cronometro

	#pragma omp parallel for reduction(+: c)
	for(i=0; i<NRA; i++){
		for(j=0; j<NCB; j++){
			for(k=0; k< NCA; k++){
				c[i][j] += a[i][k] * b[k][j];
			}
		}
	}

	terminar = omp_get_wtime(); //Termino del cronometro

	printf("TIEMPO= %1f\n", (empezar-terminar)*-1);

	return 0;
}
